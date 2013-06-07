#include "sudoku.h"
#include "ui_sudoku.h"
#include <QTextEdit>
#include <QGridLayout>
#include <QApplication>
#include <QPushButton>
#include <QDebug>

Sudoku::Sudoku(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sudoku)
{
    ui->setupUi(this);
    initGui();
}

Sudoku::~Sudoku()
{
    delete ui;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            delete cajas[i][j];
        }
    }
}


void Sudoku::initGui()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cajas[i][j] = new QTextEdit();
            ui->gLTablero->addWidget(cajas[i][j],i,j);
        }
    }
}

void Sudoku::Relacionar()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j=0; j<9; j++)
        {
            numeros[i][j] = cajas[i][j]->toPlainText().toInt();
        }
    }
}

void Sudoku::on_pB_Verificar_clicked(){
}
