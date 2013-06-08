#include "sudoku.h"
#include "ui_sudoku.h"
#include <QApplication>
#include <QGridLayout>
#include <QTextEdit>
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
            cajas[i][j] = new QTextEdit();
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
            numeros[i][j] = cajas[i][j]->toPlainText().toInt();
        }
    }
}

int Sudoku::ValidarEspaciosVacios()
{
    for(int i=0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9 ; j++)
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
        Relacionar();
        validaciones();
    }
    else
    {
        QMessageBox::warning(this,"ERROR","Existen Cuadros Vacíos, Por Favor Complete Los Que Hacen Falta...");
    }
}

void Sudoku::on_pB_Cancelar_clicked()
{
    QMessageBox msgBox;
     msgBox.setText("Seguro que Desea Salir");
     //msgBox.setInformativeText("Deseas guardar los cambios?");
     msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Cancel);
     msgBox.setDefaultButton(QMessageBox::Close);
     int elegido = msgBox.exec();
     switch (elegido) {
        case QMessageBox::Close:
        {
            close();
            break;
        }
        case QMessageBox::Cancel:
            break;
      }
}
