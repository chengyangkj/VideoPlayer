#ifndef FRAME_HANDLE_FORM_H
#define FRAME_HANDLE_FORM_H

#include <QWidget>
#include <QDebug>
#include <QThreadPool>
#include <QProgressBar>
#include <QThread>
#include <QDebug>
#include <string.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include <QLineEdit>
#include <QRunnable>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QStringList>
using namespace cv;
namespace Ui {
class Frame_Handle_Form;
}

class Frame_Handle_Form : public QWidget
{
    Q_OBJECT

public:
    explicit Frame_Handle_Form(QWidget *parent = 0);
    ~Frame_Handle_Form();
    QLineEdit *mode1_text1;
    QLineEdit *mode1_text2;
    QLineEdit *mode3_text;
    QString Video_Path;
    VideoCapture capture;
    int mode=-1;

private slots:
    void  mode_switch();
    void on_mode3_time_btn_clicked();
    void on_mode1_start_btn_clicked();
    void on_mode1_stop_btn_clicked();
    void on_mode1_ok_btn_clicked();
    void on_mode2_ok_btn_clicked();
    void on_mode1_path_btn_clicked();

    void on_mode2_path_btn_clicked();

    void on_mode3_path_btn_clicked();

    void on_mode4_imgpath_btn_clicked();

    void on_mode4_path_btn_clicked();

    void on_mode3_ok_btn_clicked();

    void on_mode4_ok_btn_clicked();

private:
    Ui::Frame_Handle_Form *ui;
};

//模式1的handle类
class Model1 : public QRunnable
{
public:
    Model1 (QString path,QString save_path,double starttime,double stoptime,QProgressBar *bar)
    {
        this->path=path;
        this->save_path=save_path;
        this->bar=bar;
        this->starttime=starttime;
        this->stoptime=stoptime;
    }

private:
    QString path;
    QString save_path;
    QProgressBar *bar;
    double starttime;
    double stoptime;
    void run(){
        // 总长，以毫秒计
        double total = stoptime - starttime;
        // 处理帧
        VideoCapture capture;
        capture.open(path.toStdString());
        Mat image;// 定义一个Mat，用来接收一帧的图像
        capture.read(image);

        VideoWriter writer;
        // 读取视频帧
        capture.set(0, starttime);
        // 当前所看时长，以毫秒计

        while (capture.read(image)) {
            double time =capture.get(0);
            double curr = (double) (time-starttime);
            // 百分比，并强转为 float
            int percent = (curr / total)*100;
             QMetaObject::invokeMethod(bar, "setValue", Qt::QueuedConnection, Q_ARG(int, percent));
            if (time >= stoptime) {
                break;
            }
            imwrite(save_path.toStdString() + "/" + QString::number(time).toStdString() + ".jpg", image);
        }
        bar->setVisible(false);
    }
};

//模式2的handle类
class Model2 : public QRunnable
{
public:
    Model2 (QString path,QString save_path,double intevel_time,QProgressBar *bar)
    {
        this->path=path;
        this->savepath=save_path;
        this->bar=bar;
        this->splittime=intevel_time;
    }

private:
    QString path;
    QString savepath;
    QProgressBar *bar;
    double splittime;
    void run(){
        VideoCapture capture;
        capture.open(path.toStdString());
        long starttime = 0;
        long stoptime = (long) capture.get(7);
        long total = stoptime - starttime;
        Mat image;// 定义一个Mat，用来接收一帧的图像
        capture.read(image);
        VideoWriter writer;
        // 读取视频帧
        capture.set(0, starttime);
        // 当前所看时长，以毫秒计
        long time_flag = 0;
        long flag = 0;
        QString savepath2 = "";
        while (capture.read(image)) {
            double time = capture.get(0);
            long curr = (long) capture.get(1);
            // 百分比，并强转为 float
            int percent = (int) curr / total;
            QMetaObject::invokeMethod(bar, "setValue", Qt::QueuedConnection, Q_ARG(int, percent*100));
            qDebug()<<"当前时间："+QString::number(time);

            if (int(time) % int(splittime) == 0) {
                savepath2 = savepath + "/" + QString::number(flag);
                //如果路径不存在，则创建
                QDir* dir = new QDir();
                if(!dir->exists(savepath2)){
                    dir->mkpath(savepath2);
                }
                flag++;
            }
            qDebug()<<savepath2 + "/" +QString::number(time) + ".jpg";
            imwrite(savepath2.toStdString() + "/" +QString::number(time).toStdString() + ".jpg", image);

        }
        bar->setVisible(false);
    }
};
//模式4的handle类
class Model4 : public QRunnable
{
public:
    Model4 (QString path,QString save_path,double rate,QProgressBar *bar)
    {
        this->path=path;
        this->savepath=save_path;
        this->bar=bar;
        this->rate=rate;
    }

private:
    QString path;
    QString savepath;
    QProgressBar *bar;
    QDir dir;
    double rate;
    QStringList img_list;
    double splittime;
    QStringList nameFilters;
    void run(){
        bar->setVisible(true);
        //获取文件夹下所有的文件
        dir.setPath(path);
        //设置读取的文件的格式
        nameFilters << "*.jpg"<< "*.png"<< "*.tif";
        dir.setFilter(QDir::Files | QDir::NoSymLinks); //设置类型过滤器，只为文件格式
        dir.setNameFilters(nameFilters);
        for (int i=0;i<dir.count();i++){
            img_list.append(path+"/"+dir[i]);

        }
        img_list.sort();
       Mat img = imread(img_list[0].toStdString());
        VideoWriter *writer = new VideoWriter(savepath.toStdString(),
          CV_FOURCC('m', 'p', '4', 'v'),rate,
          Size(img.cols,img.rows));

        for(int i =0;i<img_list.size();i++){
            img = imread(img_list[i].toStdString());
            writer->write(img);
            // 百分比，并强转为 float
            int percent = (int) i / img_list.size();
            QMetaObject::invokeMethod(bar, "setValue", Qt::QueuedConnection, Q_ARG(int, percent*100));
        }
         bar->setVisible(false);

    }
};
#endif // FRAME_HANDLE_FORM_H







