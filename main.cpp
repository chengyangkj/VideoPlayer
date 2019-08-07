#include "video_form.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Video_Form w;
    w.show();

    return a.exec();
}
