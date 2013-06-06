#include "sudoku.h"
#include "ui_sudoku.h"
#include <QTextEdit>
#include <QGridLayout>
#include <QApplication>

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
}


void Sudoku::initGui()
{
        for(int i = 0; i < 3; i++)
        {
            for(int j=0; j<3; j++)
            {
                caja = new QTextEdit();
                ui->gL_1->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_2->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_3->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_4->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_5->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_6->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_7->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_8->addWidget(caja, i, j);
                caja = new QTextEdit();
                ui->gL_9->addWidget(caja, i, j);
            }
        }
}
