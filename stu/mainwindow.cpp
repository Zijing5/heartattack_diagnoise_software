#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    my_page_in.show();
    auto f = [&](){
        this->show();
    };
    connect(&my_page_in,&Page_in::sendDiagSuccess,this,f);

//    列表
    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"一级标题";
//    ui->treeWidget->addTopLevelItem(new QTreeWidgetItem(ui->treeWidget,l));
    QTreeWidgetItem *p1 = new QTreeWidgetItem(ui->treeWidget,l);
    l.clear();
    l<<"二级标题";
    QTreeWidgetItem *p2 = new QTreeWidgetItem(p1,l);
    l.clear();
    l<<"二级标题";
    QTreeWidgetItem *p3 = new QTreeWidgetItem(p1,l);
    ui->treeWidget->addTopLevelItem(p1);
    p1->addChild(p2);
    p1->addChild(p3);
    ui->treeWidget->expandAll();

//    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}

