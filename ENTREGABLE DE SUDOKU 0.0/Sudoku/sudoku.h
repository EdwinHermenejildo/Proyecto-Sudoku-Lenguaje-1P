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
    

private:
    void initGui();
    Ui::Sudoku *ui;
    QTextEdit *caja;
};



#endif // SUDOKU_H
