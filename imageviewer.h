#pragma once
#include <QtWidgets/QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QStatusBar>
#include <QLabel>
#include <QGraphicsPixmapItem>

class ImageViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageViewer(QWidget *parent = Q_NULLPTR);
    ~ImageViewer();

private:
    void initUI();
    void createActions();
    void showImage(QString);
    void setupShortcuts();

private slots:
    void openImage();
    void zoomIn();
    void zoomOut();
    void prevImage();
    void nextImage();
    void saveAs();
    void blurImage();

private:
    QMenu* fileMenu;
    QMenu* viewMenu;
    QMenu* editMenu;

    QToolBar* fileToolBar;
    QToolBar* viewToolBar;
    QToolBar* editToolBar;
    
    QGraphicsScene* imageScene;
    QGraphicsView* imageView;

    QStatusBar* mainStatusBar;
    QLabel* mainStatusLabel;

    QAction* openAction;
    QAction* saveasAction;
    QAction* exitAction;
    QAction* zoomInAction;
    QAction* zoomOutAction;
    QAction* prevAction;
    QAction* nextAction;
    QAction* blurAction;

    QString currentImagePath;
    QGraphicsPixmapItem* currentImage;
};
