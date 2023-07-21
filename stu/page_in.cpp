#include "page_in.h"
#include "ui_page_in.h"
//#include "vedio.h"
#include <QFileDialog>
#include <QtDebug>
#include <QMessageBox>
#include <QImageReader>
#include <QPainter>
#include <QDir>
#include <QUrl>
#include <QDesktopServices>
#include <QFile>
#include <QDragEnterEvent>
#include <QTextStream>
#include <QMimeData>
#include <QStandardPaths>


Page_in::Page_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_in)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

Page_in::~Page_in()
{
    delete ui;
}

void Page_in::dragEnterEvent(QDragEnterEvent *event){

    if(event->mimeData()->hasUrls())
        event->acceptProposedAction();
    else
            event->ignore();
}

void Page_in:: dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();      // 获取MIME数据
    if(mimeData->hasUrls()){                            // 如果数据中包含URL
            QList<QUrl> urlList = mimeData->urls();         // 获取URL列表
            qDebug() << urlList << "pathlist";
            QString fileName = urlList.at(0).toLocalFile();
            qDebug() << fileName << "该文件的绝对路径";
            QFile file(fileName);     // 建立QFile对象并且以只读方式打开该文件
            if(!fileName.isEmpty()){                        // 如果文件路径不为空
                if (fileName.contains("warehouse")){
                    QString newFilePath = fileName;
                    newFilePath.replace("/warehouse/", "/workroom/");
                    if (file.rename(newFilePath))
                    {
                        qDebug() << "出库成功!";
                        ui->debugEdit->append("出库成功！");
                    }
                    else
                    {
                        qDebug() << "出库失败！";
                        ui->debugEdit->append("出库失败！");
                    }
                }else if(fileName.contains("workroom")){
                    QString newFilePath = fileName;
                    newFilePath.replace( "/workroom/","/warehouse/");
                    if (file.rename(newFilePath))
                    {
                        qDebug() << "入库成功!";
                        ui->debugEdit->append("入库成功!");
                    }
                    else
                    {
                        qDebug() << "入库失败！";
                        ui->debugEdit->append("入库失败！");
                    }

                }else{
                    qDebug() << "路径来源错误";
                    ui->debugEdit->append("路径来源错误");
                }

//                if(!file.open(QIODevice::ReadOnly)) return;
//                QTextStream in(&file);                      // 建立文本流对象
//                ui->trans->setText(in.readAll());  // 将文件中所有内容读入编辑器
            }
    }
}




void processTile(const QImage& tile) {
    (void)tile;
    // Your processing code for the tile goes here
    // For example:
    // QImage processedTile = tile.scaled(100, 100); // Resize the tile to 100x100
    // ... (other processing tasks)
}



QImage read_img(const QString& filename){

    QImageReader imageReader(filename);
    const int tileSize = 100; // Set your desired tile size here
    int width = imageReader.size().width();
    int height = imageReader.size().height();
//    qDebug() << filename;
//    qDebug() << "Supported Image Formats: " << QImageReader::supportedImageFormats();
//    qDebug() << "Image Format: " << imageReader.format();
//    qDebug() << "Tile Size: " << tileSize;
//    qDebug() << "Image Size: " << imageReader.size();

    QImage image = imageReader.read();
    QImage fullImage(width, height, QImage::Format_RGB32);
    fullImage.fill(Qt::blue);
    QPainter painter(&fullImage);

    for (int y = 0; y < height; y += tileSize) {
        for (int x = 0; x < width; x += tileSize) {

            QRect target(x, y, tileSize, tileSize); //建立目标矩形，该区域是显示图像的目的地
            QRect source(x, y, tileSize, tileSize);
            painter.drawImage(target, image, source);
        }
    }
    painter.end();
    return fullImage;
}


void DirExist(QString fullPath)
{
    QDir dir(fullPath);
    qDebug() << "file exec" << fullPath;
    if(dir.exists())
    {
        //存在当前文件夹
//        判断是否有内容 若存在 则删除
        QStringList files = dir.entryList(QDir::Files | QDir::Readable);
        QFile file(fullPath);
        if(files.isEmpty())
        {
            qDebug()<<"文件不存在";
        }
        else
        {
            qDebug()<<"文件存在";
        }
    }
    else
    {
        //不存在则创建
        qDebug() << "create";
        dir.mkdir(fullPath); //只创建一级子目录，即必须保证上级目录存在
    }
}


void vedio2img(){
//    (void)vedio;
////    视频逐帧提取
////    视频每一帧的图片转化成标准化切面
////    若不存在，创建warehouse文件夹
    qDebug() << QDir::currentPath();
    DirExist(QDir::currentPath() + QDir::separator() + "warehouse");
////    标准化切面图像存储在同一级的warehouse文件夹中
}

void img2work(){
//    选择质量高的标准化样本切面
//    若不存在，创建workroom文件夹
    qDebug() << QDir::currentPath();
    DirExist(QDir::currentPath() + QDir::separator() + "workroom");
//    标准化样本切面图像存储在同一级的workroom文件夹中
}

void Page_in::on_up_clicked()
{
    //读取视频
    QString desktopDir = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString filename = QFileDialog::getOpenFileName(this, "Select Vedio", desktopDir,
                                                    "Videos (*.avi *.mp4 *.mkv *.mov *.wmv)");

    if (filename.isEmpty())
    {
        qDebug() << "vedio empty.";
    }else{
        qDebug() << "vedio ready.";

//       /* ##############################?????????????####################################
        //读取视频并提取标准化切面并存储
        vedio2img();
//        标准化切面中自动选择综合质量高的样本作为输入，存储在同一级workroom文件夹中；
        img2work();
//        #################*/#############?????????????####################################
    }


    //视频读取成功则展示图片
    //1.加载成功
    ui->debugEdit->append("Successfully upload.");
    //2.读取图片
    QImage predefinedImage = read_img("../../upicon200.jpg");
    if (!predefinedImage.isNull()) {
        ui->show_label->setPixmap(QPixmap::fromImage(predefinedImage));
    } else{
        ui->debugEdit->append("Failed to load predefinedImage.");
    }

//    void vedio2img();



}



void Page_in::on_diag_clicked()
{
//    转到下一个页面

//    exit(0);
//    成功转换则进入下一个页面
    emit sendDiagSuccess();
//    该页面隐藏(已载入标准切面前提)#############################################
    this->hide();
//    失败则提示
}


void Page_in::on_warehouse_clicked()
{
//    点击仓库，弹出仓库；后续可以拖拽其中的图片到右侧工作区对应位置载入工作区。
    //读取仓库图片
    QString directoryPath = "warehouse";
    QDir directory(directoryPath);
    if (directory.exists()) {
        QUrl url = QUrl::fromLocalFile(directoryPath);
        QDesktopServices::openUrl(url);
    } else {
        qDebug() << "Directory does not exist.";
    }
}


void Page_in::on_cut_clicked()
{
    //    点击工作间，弹出workroom；后续可以拖拽其中的图片送回仓库。###条件动作：当标准切面样本准备好以后。
    QString directoryPath = "workroom";
    QDir directory(directoryPath);
    if (directory.exists()) {
        QUrl url = QUrl::fromLocalFile(directoryPath);
        QDesktopServices::openUrl(url);
    } else {
        qDebug() << "Directory does not exist.";
    }
}

