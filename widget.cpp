#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent) , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::convertFromBase(int value)
{
    ui->editDec->setText(QString::number(value,10));
    ui->editHex->setText(QString::number(value,16).toUpper());
    ui->editBin->setText(QString::number(value,2));
}

void Widget::on_btnCalTotal_clicked()
{
    bool ok1,ok2;
    int num=ui->editNum->text().toInt(&ok1);
    float price=ui->editPrice->text().toFloat(&ok2);

    if(!ok1||!ok2)
    {
        ui->editTotal->setText("输入错误，请输入有效数字");
        return;
    }
    float total=num*price;
    ui->editTotal->setText(QString::number(total,'f',2));
}


void Widget::on_btnDec_clicked()
{
    bool ok;
    int val=ui->editDec->text().toInt(&ok,10);
    if(ok)convertFromBase(val);
}


void Widget::on_btnBin_clicked()
{
    bool ok;
    int val=ui->editBin->text().toInt(&ok,2);
    if(ok)convertFromBase(val);
}


void Widget::on_btnHex_clicked()
{
    bool ok;
    int val=ui->editHex->text().toInt(&ok,16);
    if(ok)convertFromBase(val);
}


void Widget::on_btnDebug_clicked()
{
    double num=1245.2783;
    qDebug() << "num=" << num;
    qDebug() << "Fixed(5)=" << QString::number(num,'f',5);
    qDebug() << "Scientific(E5)=" << QString::number(num,'E',5);
    qDebug() << "General(g5)=" << QString::number(num,'g',5);
    qDebug() << "General(g3)=" << QString::number(num,'g',3);
    // 老式写法
    // QString str;
    // qDebug("num=%f",num);
    // str.setNum(num,'f',5);
    // qDebug("str=%s",str.toLocal8Bit().data());
    // str.setNum(num,'E',5);
    // qDebug("str=%s",str.toLocal8Bit().data());
    // str.setNum(num,'g',5);
    // qDebug("str=%s",str.toLocal8Bit().data());
    // str.setNum(num,'g',3);
    // qDebug("str=%s",str.toLocal8Bit().data());
}

