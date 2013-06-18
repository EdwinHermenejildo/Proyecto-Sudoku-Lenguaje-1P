#include "vtnfichas.h"
#include "ui_vtnfichas.h"
#include <QDebug>

vtnfichas::vtnfichas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vtnfichas)
{
    ui->setupUi(this);
}

vtnfichas::~vtnfichas()
{
    delete ui;
}

void vtnfichas::on_pbf1_clicked()
{
    numero=1;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf2_clicked()
{
    numero=2;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf3_clicked()
{
    numero=3;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf4_clicked()
{
    numero=4;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf5_clicked()
{
    numero=5;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf6_clicked()
{
    numero=6;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf7_clicked()
{
    numero=7;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf8_clicked()
{
    numero=8;
    qDebug() << numero;
    this->close();
}

void vtnfichas::on_pbf9_clicked()
{
    numero=9;
    qDebug() << numero;
    this->close();
}

int vtnfichas::getNumeroEscogido(){
    return numero;
}
