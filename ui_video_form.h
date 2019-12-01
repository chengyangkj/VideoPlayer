/********************************************************************************
** Form generated from reading UI file 'video_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_FORM_H
#define UI_VIDEO_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Video_Form
{
public:
    QWidget *centralWidget;
    QLabel *video_label;
    QSlider *slider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_btn;
    QPushButton *pushButton;
    QPushButton *start_btn;
    QPushButton *pushButton_2;
    QLabel *label_mag;
    QSpacerItem *horizontalSpacer;
    QPushButton *choose_btn;
    QPushButton *frame_handle_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_pos;
    QLabel *label;
    QLabel *label_total;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Video_Form)
    {
        if (Video_Form->objectName().isEmpty())
            Video_Form->setObjectName(QString::fromUtf8("Video_Form"));
        Video_Form->resize(839, 526);
        centralWidget = new QWidget(Video_Form);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        video_label = new QLabel(centralWidget);
        video_label->setObjectName(QString::fromUtf8("video_label"));
        video_label->setGeometry(QRect(71, 21, 721, 331));
        video_label->setStyleSheet(QString::fromUtf8("background:rgb(225, 225, 225);\n"
"font-size: 30px;\n"
""));
        slider = new QSlider(centralWidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(60, 380, 731, 16));
        slider->setStyleSheet(QString::fromUtf8(""));
        slider->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 420, 731, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        open_btn = new QPushButton(layoutWidget);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));

        horizontalLayout->addWidget(open_btn);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        start_btn = new QPushButton(layoutWidget);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));

        horizontalLayout->addWidget(start_btn);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label_mag = new QLabel(layoutWidget);
        label_mag->setObjectName(QString::fromUtf8("label_mag"));

        horizontalLayout->addWidget(label_mag);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        choose_btn = new QPushButton(layoutWidget);
        choose_btn->setObjectName(QString::fromUtf8("choose_btn"));

        horizontalLayout->addWidget(choose_btn);

        frame_handle_btn = new QPushButton(layoutWidget);
        frame_handle_btn->setObjectName(QString::fromUtf8("frame_handle_btn"));

        horizontalLayout->addWidget(frame_handle_btn);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(660, 360, 131, 20));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_pos = new QLabel(widget);
        label_pos->setObjectName(QString::fromUtf8("label_pos"));

        horizontalLayout_2->addWidget(label_pos);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_total = new QLabel(widget);
        label_total->setObjectName(QString::fromUtf8("label_total"));

        horizontalLayout_2->addWidget(label_total);

        Video_Form->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Video_Form);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 839, 23));
        Video_Form->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Video_Form);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Video_Form->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Video_Form);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Video_Form->setStatusBar(statusBar);

        retranslateUi(Video_Form);

        QMetaObject::connectSlotsByName(Video_Form);
    } // setupUi

    void retranslateUi(QMainWindow *Video_Form)
    {
        Video_Form->setWindowTitle(QApplication::translate("Video_Form", "Video_Form", nullptr));
        video_label->setText(QApplication::translate("Video_Form", "NO VIDEO", nullptr));
        open_btn->setText(QApplication::translate("Video_Form", "\346\211\223\345\274\200\350\247\206\351\242\221", nullptr));
        pushButton->setText(QApplication::translate("Video_Form", "<<\346\205\242\346\224\276", nullptr));
        start_btn->setText(QApplication::translate("Video_Form", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
        pushButton_2->setText(QApplication::translate("Video_Form", "\345\277\253\350\277\233>>", nullptr));
        label_mag->setText(QApplication::translate("Video_Form", " 0", nullptr));
        choose_btn->setText(QApplication::translate("Video_Form", "\351\200\211\346\213\251\346\255\244\345\244\204", nullptr));
        frame_handle_btn->setText(QApplication::translate("Video_Form", "\345\270\247\345\244\204\347\220\206", nullptr));
        label_2->setText(QApplication::translate("Video_Form", "\345\270\247:", nullptr));
        label_pos->setText(QApplication::translate("Video_Form", "0", nullptr));
        label->setText(QApplication::translate("Video_Form", "/", nullptr));
        label_total->setText(QApplication::translate("Video_Form", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Video_Form: public Ui_Video_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_FORM_H
