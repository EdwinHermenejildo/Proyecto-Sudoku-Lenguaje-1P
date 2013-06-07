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
    

private slots:
    void on_pB_Verificar_clicked();

public:
    void Relacionar();


private:
    void initGui();
    Ui::Sudoku *ui;
    QTextEdit *cajas[9][9];
    int numeros[9][9];
};



#endif // SUDOKU_H
