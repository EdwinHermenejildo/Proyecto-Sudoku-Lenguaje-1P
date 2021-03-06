 #ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>
#include "vtnfichas.h"

namespace Ui {
class Sudoku;
}


class QTextEdit;
class QLabel;
class QImage;
class QPushButton;

class Sudoku : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Sudoku(QWidget *parent = 0);
    ~Sudoku();
    void Relacionar();
    int ValidarEspaciosVacios();
    int SubCuadros();
    int VerificarSubCuadro();
    int validarX();
    int validaLinea(int i);
    int validarY();
    int validaColumna(int j);   
    int verificaArregloIndices(int arreglo[9]);
    void validaciones();

private slots:
    void on_pB_Verificar_clicked();

    void on_pB_Salir_clicked();

    void on_pB_Solucion_clicked();

    int AbrirDialogoFichas();

    private:
        void initGui();
        Ui::Sudoku *ui;
        QPushButton *cajas[9][9];
        int numeros[9][9];
        int subnumeros[3][3];
        vtnfichas vtnEscogerFicha;
        int numero;
};



#endif // SUDOKU_H
