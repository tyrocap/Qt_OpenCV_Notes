#include "imageviewer.h"

ImageViewer::ImageViewer(QWidget* parent)
    : QMainWindow(parent)
    , fileMenu(nullptr)
    , viewMenu(nullptr)
    , currentImage(nullptr)
{
    initUI();
}

ImageViewer::~ImageViewer() {

}

    //void initUI();
    //void createActions();
    //void showImage(QString);
    //void setupShortcuts();

void ImageViewer::initUI() {
    this->resize(800, 600);

    // setup menubar
    fileMenu = menuBar()->addMenu("&File");
    viewMenu = menuBar()->addMenu("&View");

    // setup toolbar
    fileToolBar = addToolBar("File");
    viewToolBar = addToolBar("View");

    // main area for the image
    imageScene = new QGraphicsScene(this);
    imageView = new QGraphicsView(imageScene);
    setCentralWidget(imageView);

    // setup status bar
    mainStatusBar = statusBar();
    mainStatusLabel = new QLabel(mainStatusBar);
    mainStatusBar->addPermanentWidget(mainStatusLabel);
    mainStatusLabel->setText("Image Information will be here!");

    createActions();
}





