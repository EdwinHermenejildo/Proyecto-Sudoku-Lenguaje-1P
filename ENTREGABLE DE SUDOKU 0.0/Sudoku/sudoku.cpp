#include "sudoku.h"
#include "ui_sudoku.h"
#include <QApplication>
#include <QGridLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QChar>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QIcon>
#include <QDialog>
#include "vtnfichas.h"
#include "ui_vtnfichas.h"

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
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
            delete cajas[i][j];
        }
    }
}

void Sudoku::initGui()
{
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
            cajas[i][j] = new QPushButton(QIcon(":/img/48/vacia.png"),"");
                        cajas[i][j]->setIconSize(QSize(48,48));
                        cajas[i][j]->setFlat(true);
                        connect(cajas[i][j],SIGNAL(clicked()),this,SLOT(AbrirDialogoFichas()));
                       // QImage imgficha(":/img/48/vacia.png");
                        //cajas[i][j]->setPixmap(QPixmap::fromImage(imgficha));
                        ui->gLTablero->addWidget(cajas[i][j],i,j);
        }
    }
}

void Sudoku::Relacionar()
{
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
            //numeros[i][j] = cajas[i][j]->toPlainText().toInt();
        }
    }
}

int Sudoku::ValidarEspaciosVacios()
{
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
           /* if(cajas[i][j]->toPlainText().isEmpty())
            {
                return 0;
            }*/
        }
    }
    return 1;
}

int Sudoku::SubCuadros()
{
    int contador = 0;
    //Primer SubCuadro
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            subnumeros[i][j] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Segundo SubCuadro
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=3 ; j<6 ; j++)
        {
            subnumeros[i][j-3] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Tercer SubCuadro
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=6 ; j<9 ; j++)
        {
            subnumeros[i][j-6] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Cuarto SubCuadro
    for(int i=3 ; i<6 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            subnumeros[i-3][j] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Quinta SubCuadro
    for(int i=3 ; i<6 ; i++)
    {
        for(int j=3 ; j<6 ; j++)
        {
            subnumeros[i-3][j-3] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Sexto SubCuadro
    for(int i=3 ; i<6 ; i++)
    {
        for(int j=6 ; j<9 ; j++)
        {
            subnumeros[i-3][j-6] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Septimo SubCuadro
    for(int i=6 ; i<9 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            subnumeros[i-6][j] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Octavo SubCuadro
    for(int i=6 ; i<9 ; i++)
    {
        for(int j=3 ; j<6 ; j++)
        {
            subnumeros[i-6][j-3] = numeros[i][j];
        }
    }
    contador = contador + VerificarSubCuadro();
    //Noveno SubCuadro
    for(int i=6 ; i<9 ; i++)
    {
        for(int j=6 ; j<9 ; j++)
        {
            subnumeros[i-6][j-6] = numeros[i][j];
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
                    if (i!=k || j!=l)
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

int Sudoku::validarX()
{
    int b = 1;
    for(int i=0 ; i<9 ; i++)
    {
        if(b==0)
        {
          return 0;
        }
        b = validaLinea(i);
    }
    return 1;
}

int Sudoku:: validaLinea(int i)
{
   int fichas[9] = {0};
   int ind;
   for(int j=0 ; j<9 ; j++)
   {
       ind = numeros[i][j];
       fichas[ind-1] = 1;
   }
   return verificaArregloIndices(fichas);
}

int Sudoku::validarY()
{
    int b = 1;
    for(int j=0 ; j<9 ; j++)
    {
        if(b==0)
        {
          return 0;
        }
        b = validaColumna(j);
    }
    return 1;
}

int Sudoku::validaColumna(int j)
{
    int fichas[9] = {0};
    int ind;
    for(int i=0 ; i<9 ; i++)
    {
        ind = numeros[i][j];
        fichas[ind-1] = 1;
    }
    return verificaArregloIndices(fichas);
}

int Sudoku::verificaArregloIndices(int arreglo[9])
{
    for(int i=0 ; i<9 ; i++)
    {
        if(arreglo[i]!=1)
        {
            return 0;
        }
    }
    return 1;
}

void Sudoku::validaciones()
{
    int b = 1;
    if(!validarX())
    {
       QMessageBox::critical(this,"ERROR","Existen Números Repetidos En Las Filas..!");
       b=0;
    }
    if(!validarY())
    {
       QMessageBox::critical(this,"ERROR","Existen Números Repetidos En Las Columnas..!");
       b=0;
    }
    if(!SubCuadros())
    {
       QMessageBox::critical(this,"ERROR","Existen Números Repetidos En Las Sub-Cuadrículas..!");
       b=0;
    }
    if(b==1)
    {
        QMessageBox::information(this,"FELICITACIONES","Sudoku Correcto..!");
    }
}

void Sudoku::on_pB_Verificar_clicked()
{
    if(ValidarEspaciosVacios())
    {
       // Relacionar();
        validaciones();
    }
    else
    {
        QMessageBox::warning(this,"ERROR","Existen Cuadros Vacíos, Por Favor Complete Los Que Hacen Falta...");
    }
}

void Sudoku::on_pB_Salir_clicked()
{
    close();
}

void Sudoku::on_pB_Solucion_clicked()
{
    QFile file("../Sudoku/Soluciones.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
       return; // O pones tu dialogo de error

    QTextStream stream(&file);
    QString myString = stream.readLine(); // Lee Todo Y Lo Guarda En Un QString
    int k=0;
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
        {
            cajas[i][j]->setText((QChar)myString[k]);
            k++;
        }
    }
}

int Sudoku:: AbrirDialogoFichas(){
    vtnEscogerFicha.setWindowModality(Qt::ApplicationModal);
    vtnEscogerFicha.show();
    numero = vtnEscogerFicha.getNumeroEscogido();
    qDebug() << numero;
   // return nro;
}
