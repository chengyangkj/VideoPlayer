#ifndef VIDEO_FORM_H
#define VIDEO_FORM_H

#include <QMainWindow>
#include <QThreadPool>
#include <QProgressBar>
#include <QThread>
#include <QDebug>
#include <string.h>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QSlider>
#include <opencv2/opencv.hpp>
#include <frame_handle_form.h>
#include <QTest>
#include <video_player.h>
#include <QPushButton>
namespace Ui {
class Video_Form;
}
using namespace cv;
class Video_Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Video_Form(QWidget *parent = 0);
    ~Video_Form();
    Video_Player *player=NULL;
private:
    Ui::Video_Form *ui;
    Frame_Handle_Form *frame_hanle_from=NULL;
     QString file_name;
private slots:
    void Open_video_Slot();
    void Frame_handle_Slot();
    void start_btn_Slot();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_slider_sliderMoved(int position);
    void on_slider_sliderPressed();
    void on_choose_btn_clicked();

};

#endif // VIDEO_FORM_H
