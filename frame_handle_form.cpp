#include "frame_handle_form.h"
#include "ui_frame_handle_form.h"

Frame_Handle_Form::Frame_Handle_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Frame_Handle_Form)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);
     mode1_text1=ui->mode1_start_text;
     mode1_text2=ui->mode1_stop_text;
     mode3_text=ui->mode3_time_text;
    //连接相关槽函数
    connect(ui->mode1_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode2_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode3_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    connect(ui->mode4_btn,SIGNAL(clicked(bool)),
            this,SLOT(mode_switch()));
    ui->progressBar1->setVisible(false);
    ui->progressBar_2->setVisible(false);
    ui->progressBar_3->setVisible(false);
    ui->progressBar_4->setVisible(false);
}


void Frame_Handle_Form::on_mode3_time_btn_clicked()
{
    //截取单帧
    this->hide();
    this->mode=3;
}

void Frame_Handle_Form::on_mode1_start_btn_clicked()
{
    //自定义拆帧
    this->hide();
    this->mode=1;
}

void Frame_Handle_Form::on_mode1_stop_btn_clicked()
{
    //自定义拆帧
    this->hide();
    this->mode=2;
}
void Frame_Handle_Form::on_mode1_path_btn_clicked()
{
    //模式1的浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode1_path_text->setText(file_path);
    }
}

void Frame_Handle_Form::on_mode2_path_btn_clicked()
{
    //模式2的浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode2_path_text->setText(file_path);
    }
}
void Frame_Handle_Form::on_mode3_path_btn_clicked()
{
    //模式3的浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择文件保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode3_path_text->setText(file_path);
    }
}

void Frame_Handle_Form::on_mode4_imgpath_btn_clicked()
{
    //模式4的图片位置浏览按钮
    QString file_path = QFileDialog::getExistingDirectory(this, "请选择图片帧保存路径...", "./");
    if(file_path.isEmpty())
    {
        return;
    }
    else{
        ui->mode4_imgpath_text->setText(file_path);
    }
}
void Frame_Handle_Form::on_mode4_path_btn_clicked()
{
    //模式4的视频位置浏览按钮
    file_name = QFileDialog::getOpenFileName(this,tr("选择保存视频文件名"),".",
                                                    tr("视频格式(*.avi *.mp4 *.flv *.mkv)"));
    QFile file(file_name);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }
    else{

    }
}

void Frame_Handle_Form::on_mode1_ok_btn_clicked()
{
    //查看有没有目录,没有创建
    QDir* dir = new QDir(ui->mode1_path_text->text());
    if(!dir->exists()){
        dir->mkpath(ui->mode1_path_text->text());
    }
    //自定义确定点击
    ui->progressBar1->setValue(0);
    ui->progressBar1->setVisible(true);
    Model1 *m1_task = new Model1(Video_Path,ui->mode1_path_text->text(),ui->mode1_start_text->text().toDouble(),
                                ui->mode1_stop_text->text().toDouble(),ui->progressBar1);
    QThreadPool::globalInstance()->start(m1_task);

}

void Frame_Handle_Form::on_mode2_ok_btn_clicked()
{  //等时长拆帧确定按钮点击事件
    //查看有没有目录,没有创建
    QDir* dir = new QDir(ui->mode2_path_text->text());
    if(!dir->exists()){
        dir->mkpath(ui->mode2_path_text->text());
    }
    ui->progressBar_2->setValue(0);
    ui->progressBar_2->setVisible(true);
   Model2 *m2_task = new Model2(Video_Path,ui->mode2_path_text->text(),
                                ui->mode2_time_text->text().toDouble(),ui->progressBar_2);
  QThreadPool::globalInstance()->start(m2_task);
}

Frame_Handle_Form::~Frame_Handle_Form()
{
    delete ui;
}
void Frame_Handle_Form::mode_switch(){
    // 获取发送信号的对象存放到 QObject 基类对象中
       QObject* obj = sender();
       // 把基类对象强制转换成子类对象
       QPushButton* button = dynamic_cast<QPushButton*>(obj);
       // 获取子类对象文本可以判断出是点了哪个按钮

      QString text =  button->text();
      if (text=="自定义拆帧"){
          ui->stackedWidget->setCurrentIndex(0);
      }
      else if(text=="等长拆帧"){
           ui->stackedWidget->setCurrentIndex(1);
      }
      else if(text=="截取单帧"){
           ui->stackedWidget->setCurrentIndex(2);
      }
      else if(text=="视频合成"){
           ui->stackedWidget->setCurrentIndex(3);
      }


}





