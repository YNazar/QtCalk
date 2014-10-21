#ifndef NEWWIDGET_H
#define NEWWIDGET_H
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>

class NewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NewWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void n1();
    void n2();
    void n3();
    void n4();
    void n5();
    void n6();
    void n7();
    void n8();
    void n9();
    void n0();
    void mult();
    void com();
    void clear();
    void show();
    void div();
    void sub();
    void add();
    void is();

private:
    QLabel* label ;
    QGridLayout* layout;

    QPushButton * Button0;
    QPushButton * Button1;
    QPushButton * Button2;
    QPushButton * Button3;
    QPushButton * Button4;
    QPushButton * Button5;
    QPushButton * Button6;
    QPushButton * Button7;
    QPushButton * Button8;
    QPushButton * Button9;
    QPushButton * comButton;
    QPushButton * addButton;
    QPushButton * subButton;
    QPushButton * divButton;
    QPushButton * multButton;
    QPushButton * isButton;
    QPushButton * clearButton;

};

#endif // NEWWIDGET_H
