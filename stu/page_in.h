#ifndef PAGE_IN_H
#define PAGE_IN_H

#include <QWidget>

namespace Ui {
class Page_in;
}

class Page_in : public QWidget
{
    Q_OBJECT

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

public:
    explicit Page_in(QWidget *parent = nullptr);
    ~Page_in();

private slots:
    void on_up_clicked();
    void on_diag_clicked();

    void on_warehouse_clicked();

    void on_cut_clicked();

signals:
    void sendDiagSuccess();

private:
    Ui::Page_in *ui;
};

#endif // PAGE_IN_H
