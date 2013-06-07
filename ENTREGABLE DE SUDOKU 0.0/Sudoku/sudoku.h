 #ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>

namespace Ui {
class Sudoku;
}


class QTextEdit;

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

private:
    void initGui();
    Ui::Sudoku *ui;
    QTextEdit *cajas[9][9];
    int numeros[9][9];
    int subnumeros[3][3];
};



#endif // SUDOKU_H
