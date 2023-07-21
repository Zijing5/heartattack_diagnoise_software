/********************************************************************************
** Form generated from reading UI file 'page_in.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_IN_H
#define UI_PAGE_IN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_in
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *cut;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *up;
    QSpacerItem *horizontalSpacer;
    QPushButton *warehouse;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *diag;
    QTextEdit *debugEdit;
    QLabel *label;
    QLabel *show_label;

    void setupUi(QWidget *Page_in)
    {
        if (Page_in->objectName().isEmpty())
            Page_in->setObjectName("Page_in");
        Page_in->resize(600, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HIT.png"), QSize(), QIcon::Normal, QIcon::Off);
        Page_in->setWindowIcon(icon);
        gridLayout = new QGridLayout(Page_in);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        cut = new QPushButton(Page_in);
        cut->setObjectName("cut");
        cut->setMinimumSize(QSize(200, 80));
        cut->setMaximumSize(QSize(220, 150));

        gridLayout->addWidget(cut, 14, 8, 1, 1);

        label_3 = new QLabel(Page_in);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(300, 100));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 8, 1, 1);

        verticalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 17, 8, 1, 1);

        label_2 = new QLabel(Page_in);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(300, 100));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 14, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        widget_2 = new QWidget(Page_in);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        up = new QPushButton(widget_2);
        up->setObjectName("up");
        up->setMinimumSize(QSize(35, 35));
        up->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(up);


        gridLayout->addWidget(widget_2, 16, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 14, 0, 1, 1);

        warehouse = new QPushButton(Page_in);
        warehouse->setObjectName("warehouse");
        warehouse->setMinimumSize(QSize(200, 80));
        warehouse->setMaximumSize(QSize(220, 100));

        gridLayout->addWidget(warehouse, 14, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 14, 9, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 2, 1, 1);

        widget = new QWidget(Page_in);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        diag = new QPushButton(widget);
        diag->setObjectName("diag");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diag->sizePolicy().hasHeightForWidth());
        diag->setSizePolicy(sizePolicy);
        diag->setMinimumSize(QSize(35, 35));
        diag->setMaximumSize(QSize(50, 50));
        diag->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(diag);


        gridLayout->addWidget(widget, 16, 8, 1, 1);

        debugEdit = new QTextEdit(Page_in);
        debugEdit->setObjectName("debugEdit");
        debugEdit->setMinimumSize(QSize(200, 30));
        debugEdit->setMaximumSize(QSize(220, 30));

        gridLayout->addWidget(debugEdit, 13, 2, 1, 1);

        label = new QLabel(Page_in);
        label->setObjectName("label");
        label->setMinimumSize(QSize(220, 180));
        label->setMaximumSize(QSize(220, 180));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 5, 8, 1, 1);

        show_label = new QLabel(Page_in);
        show_label->setObjectName("show_label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(show_label->sizePolicy().hasHeightForWidth());
        show_label->setSizePolicy(sizePolicy1);
        show_label->setMinimumSize(QSize(220, 180));
        show_label->setMaximumSize(QSize(220, 180));
        show_label->setFrameShape(QFrame::Box);
        show_label->setFrameShadow(QFrame::Raised);
        show_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(show_label, 5, 2, 1, 1);


        retranslateUi(Page_in);

        QMetaObject::connectSlotsByName(Page_in);
    } // setupUi

    void retranslateUi(QWidget *Page_in)
    {
        Page_in->setWindowTitle(QCoreApplication::translate("Page_in", "Page_in", nullptr));
#if QT_CONFIG(tooltip)
        Page_in->setToolTip(QCoreApplication::translate("Page_in", "\347\254\254\344\270\200\344\270\252\351\241\265\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        cut->setText(QCoreApplication::translate("Page_in", "\345\267\245\344\275\234\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("Page_in", "\346\240\207\345\207\206\345\210\207\351\235\242\346\240\267\346\234\254", nullptr));
        label_2->setText(QCoreApplication::translate("Page_in", "\345\244\207\351\200\211\345\210\207\351\235\242", nullptr));
        up->setText(QCoreApplication::translate("Page_in", "\344\270\212\344\274\240", nullptr));
        warehouse->setText(QCoreApplication::translate("Page_in", "\344\273\223\345\272\223", nullptr));
        diag->setText(QCoreApplication::translate("Page_in", "\350\257\212\346\226\255", nullptr));
        debugEdit->setHtml(QCoreApplication::translate("Page_in", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">deBug:</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Page_in", "\346\234\252\345\212\240\350\275\275", nullptr));
        show_label->setText(QCoreApplication::translate("Page_in", "\346\234\252\344\270\212\344\274\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_in: public Ui_Page_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_IN_H
