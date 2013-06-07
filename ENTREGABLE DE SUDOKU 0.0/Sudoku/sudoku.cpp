#include "sudoku.h"
#include "ui_sudoku.h"
#include <QTextEdit>
#include <QGridLayout>
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
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

int Sudoku::Validar()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(cajas[i][j]->toPlainText().isEmpty())
            {
                return 0;
            }
        }
    }
    return 1;
}

int Sudoku::SubCuadros()
{
    int contador=0;
    //Primer SubCuadro
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subnumeros[i][j]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Segundo SubCuadro
    for(int i = 0; i < 3; i++)
    {
        for(int j = 3; j < 6; j++)
        {
            subnumeros[i][j-3]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Tercer SubCuadro
    for(int i = 0; i < 3; i++)
    {
        for(int j = 6; j < 9; j++)
        {
            subnumeros[i][j-6]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Cuarto SubCuadro
    for(int i = 3; i < 6; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subnumeros[i-3][j]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Quinta SubCuadro
    for(int i = 3; i < 6; i++)
    {
        for(int j = 3; j < 6; j++)
        {
            subnumeros[i-3][j-3]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Sexto SubCuadro
    for(int i = 3; i < 6; i++)
    {
        for(int j = 6; j < 9; j++)
        {
            subnumeros[i-3][j-6]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Septimo SubCuadro
    for(int i = 6; i < 9; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subnumeros[i-6][j]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Octavo SubCuadro
    for(int i = 6; i < 9; i++)
    {
        for(int j = 3; j < 6; j++)
        {
            subnumeros[i-6][j-3]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Noveno SubCuadro
    for(int i = 6; i < 9; i++)
    {
        for(int j = 6; j < 9; j++)
        {
            subnumeros[i-6][j-6]=numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    if (contador == 9)
    {
        return 1;
    }
    return 0;
}

int Sudoku::VerificarSubCuadro()
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            int numero = subnumeros[i][j];
            for(int k=0 ; k<3 ; k++)
            {
                for(int l=0 ; l<3 ; l++)
                {
                    if (i != k && j != l)
                    {
                         if (numero == subnumeros[k][l])
                         {
                             return 0;
                         }
                    }
                }
            }
        }
    }
    return 1;
}

void Sudoku::on_pB_Verificar_clicked()
{
    Relacionar();
    SubCuadros();
    qDebug() << VerificarSubCuadro();
}
