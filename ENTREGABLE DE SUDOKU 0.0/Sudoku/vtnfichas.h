#ifndef VTNFICHAS_H
#define VTNFICHAS_H

#include <QWidget>

namespace Ui {
class vtnfichas;
}

class vtnfichas : public QWidget
{
    Q_OBJECT
    
public:
    explicit vtnfichas(QWidget *parent = 0);
    ~vtnfichas();
    void on_pbf1_clicked();
    void on_pbf2_clicked();
    void on_pbf3_clicked();
    void on_pbf4_clicked();
    void on_pbf5_clicked();
    void on_pbf6_clicked();
    void on_pbf7_clicked();
    void on_pbf8_clicked();
    void on_pbf9_clicked();
    int getNumeroEscogido();
    
private:
    Ui::vtnfichas *ui;
    int numero;
};

#endif // VTNFICHAS_H
