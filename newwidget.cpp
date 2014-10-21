#include <QApplication>

#include "newwidget.h"

NewWidget::NewWidget(QWidget *parent) :
    QWidget(parent)
{
    Button0=new QPushButton("&0");
    Button1=new QPushButton("&1");
    Button2=new QPushButton("&2");
    Button3 = new QPushButton("&3");
    Button4 = new QPushButton("&4");
    Button5=new QPushButton("&5");
    Button6=new QPushButton("&6");
    Button7=new QPushButton("&7");
    Button8 = new QPushButton("&8");
    Button9 = new QPushButton("&9");
    comButton=new QPushButton("&.");
    addButton=new QPushButton("&+");
    subButton=new QPushButton("&-");
    divButton = new QPushButton("&/");
    multButton = new QPushButton("&*");
    isButton=new QPushButton("&=");
    clearButton=new QPushButton("&CE");

    QGridLayout *layout = new QGridLayout;
    QLabel *label = new QLabel;
    
    layout->addWidget(label ,0,1);
    layout->addWidget(Button7,1,0);
    layout->addWidget(Button8,1,1);
    layout->addWidget(Button9,1,2);
    layout->addWidget(divButton,1,3);
    layout->addWidget(Button4,2,0);
    layout->addWidget(Button5,2,1);
    layout->addWidget(Button6,2,2);
    layout->addWidget(multButton,2,3);
    layout->addWidget(Button1,3,0);
    layout->addWidget(Button2,3,1);
    layout->addWidget(Button3,3,2);
    layout->addWidget(subButton,3,3);
    layout->addWidget(Button0,4,0);
    layout->addWidget(comButton,4,1);
    layout->addWidget(addButton,4,3);
    layout->addWidget(isButton,4,2);

    QObject::connect(Button0, SIGNAL(clicked()), this , SLOT(n0()));
    QObject::connect(Button1, SIGNAL(clicked()), this , SLOT(n1()));
    QObject::connect(Button2, SIGNAL(clicked()), this , SLOT(n2()));
    QObject::connect(Button3, SIGNAL(clicked()), this , SLOT(n3()));
    QObject::connect(Button4, SIGNAL(clicked()), this , SLOT(n4()));
    QObject::connect(Button5, SIGNAL(clicked()), this , SLOT(n5()));
    QObject::connect(Button6, SIGNAL(clicked()), this , SLOT(n6()));
    QObject::connect(Button7, SIGNAL(clicked()), this , SLOT(n7()));
    QObject::connect(Button8, SIGNAL(clicked()), this , SLOT(n8()));
    QObject::connect(Button9, SIGNAL(clicked()), this , SLOT(n9()));
    QObject::connect(clearButton, SIGNAL(clicked()), this , SLOT(clear()));
    QObject::connect(addButton, SIGNAL(clicked()), this , SLOT(add()));
    QObject::connect(subButton, SIGNAL(clicked()), this , SLOT(sub()));
    QObject::connect(divButton, SIGNAL(clicked()), this , SLOT(div()));
    QObject::connect(multButton, SIGNAL(clicked()), this , SLOT(mult()));
    QObject::connect(comButton, SIGNAL(clicked()), this , SLOT(com()));
    QObject::connect(isButton, SIGNAL(clicked()), this , SLOT(is()));


    setLayout( layout );
    setWindowTitle("Calc");

}


void NewWidget::n0()
{
    label->setText( label->text() + "0" );
}
void NewWidget::n1()
{
    label->setText( label->text() + "1" );
}
void NewWidget::n2()
{
    label->setText( label->text() + "2" );
}
void NewWidget::clear()
{
    label->setText(  "" );
}
void NewWidget::n3()
{
    label->setText( label->text() + "3" );
}
void NewWidget::n4()
{
    label->setText( label->text() + "4" );
}
void NewWidget::n5()
{
    label->setText( label->text() + "5" );
}
void NewWidget::n6()
{
    label->setText(label->text() + "6");
}
void NewWidget::n7()
{
    label->setText( label->text() + "7" );
}
void NewWidget::n8()
{
    label->setText( label->text() + "8" );
}
void NewWidget::n9()
{
    label->setText( label->text() + "9" );
}
void NewWidget::add()
{
    label->setText(label->text()+ "+");
}
void NewWidget::sub()
{
    label->setText( label->text() + "-" );
}
void NewWidget::div()
{
    label->setText( label->text() + "/" );
}
void NewWidget::mult()
{
    label->setText( label->text() + "*" );
}
void NewWidget::com()
{
    label->setText( label->text() + "." );
}
void NewWidget::is()
{
    label->setText( label->text() + "=" );
}

