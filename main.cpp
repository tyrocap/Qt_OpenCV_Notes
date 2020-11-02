#include "imageviewer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ImageViewer window;
    window.show();
    return app.exec();
}
