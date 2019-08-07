#include "video_player.h"

//初始化静态变量
bool Video_Player::Is_Video_play=false;
Video_Player::Video_Player(QSlider *slider,  QLabel *video_label, QLabel *label_pos, QLabel *label_total)
{
    //构造函数
    this->slider = slider;
    this->video_label = video_label;
    this->label_pos=label_pos;
    this->label_total=label_total;

}


void Video_Player::show_img(Mat image,QLabel *label){

//    在label上显示opencv图片
    cv::cvtColor(image,image,CV_BGR2RGB);
    QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows,
                        image.cols*image.channels(),
                        QImage::Format_RGB888).scaled(label->width(), label->height());

    label->clear();
    label->setPixmap(QPixmap::fromImage(img));
              //ui->processPushButton->setEnabled(true);

}
void Video_Player::play(QString path){
    Stop_Play=false;
      capture.open(path.toStdString());
      slider->setRange(0,capture.get(7));
      this->label_total->setText(QString::number(capture.get(7)));
//      Is_Video_play==true;
//      Stop_Play=false;
}
void Video_Player::Stop(){
    //停止播放
    Stop_Play=true;
}
int Video_Player::Faster(){
    if(speed>5){
       speed-=5;
       return speed;
    }
    else{
        return 5;
    }


}
int Video_Player::Slower(){
    if(speed<1000){
       speed+=20;

       return speed;
    }
    else{
        return 1000;
    }

}

void Video_Player::Start(){
    //打开播放锁
    Stop_Play=false;
}
void Video_Player::Pase(){
    //暂停

        Is_Pase=true;

}
void Video_Player::PaseOrStart(){
    //暂停
    if(Is_Pase==true)
    {
        Is_Pase=false;
    }
    else{
        Is_Pase=true;
    }

}
double Video_Player::get_current_pos(){
    return (capture.get(0));
}

void Video_Player::Set_postion(long po){
    //根据frame进行设置位置
    this->pos=po;
}
void Video_Player::run(){
    //player的线程函数
    while(true){
        //点击进度条响应 变化起始位置
        if(pos!=-1){
          capture.set(1,pos);
          pos=-1;
        }
        //暂停响应
       if (!Is_Pase){
           bool ret = capture.read(frame);
           long i = capture.get(1);
            if(Stop_Play){
                break;
            }
            if(!ret){
                continue;
            }
            show_img(frame,video_label);
            QMetaObject::invokeMethod(slider, "setValue", Qt::QueuedConnection, Q_ARG(int, i));
             QMetaObject::invokeMethod(label_pos, "setText", Qt::QueuedConnection,Q_ARG(QString,QString::number(i)));
            QTest::qSleep(speed);
       }

    }
}
