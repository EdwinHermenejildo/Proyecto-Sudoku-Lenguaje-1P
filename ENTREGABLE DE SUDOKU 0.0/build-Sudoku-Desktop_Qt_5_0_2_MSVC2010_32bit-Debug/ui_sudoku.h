/********************************************************************************
** Form generated from reading UI file 'sudoku.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sudoku
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_11;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser_11;
    QTextBrowser *textBrowser_12;
    QTextBrowser *textBrowser_13;
    QGridLayout *gridLayout_22;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_20;
    QTextBrowser *textBrowser_21;
    QTextBrowser *textBrowser_22;
    QTextBrowser *textBrowser_23;
    QTextBrowser *textBrowser_24;
    QTextBrowser *textBrowser_25;
    QTextBrowser *textBrowser_26;
    QTextBrowser *textBrowser_27;
    QGridLayout *gridLayout_13;
    QTextBrowser *textBrowser_28;
    QTextBrowser *textBrowser_29;
    QTextBrowser *textBrowser_30;
    QTextBrowser *textBrowser_31;
    QTextBrowser *textBrowser_32;
    QTextBrowser *textBrowser_33;
    QTextBrowser *textBrowser_34;
    QTextBrowser *textBrowser_35;
    QTextBrowser *textBrowser_36;
    QGridLayout *gridLayout_14;
    QTextBrowser *textBrowser_37;
    QTextBrowser *textBrowser_38;
    QTextBrowser *textBrowser_39;
    QTextBrowser *textBrowser_40;
    QTextBrowser *textBrowser_41;
    QTextBrowser *textBrowser_42;
    QTextBrowser *textBrowser_43;
    QTextBrowser *textBrowser_44;
    QTextBrowser *textBrowser_45;
    QGridLayout *gridLayout_16;
    QTextBrowser *textBrowser_46;
    QTextBrowser *textBrowser_47;
    QTextBrowser *textBrowser_48;
    QTextBrowser *textBrowser_49;
    QTextBrowser *textBrowser_50;
    QTextBrowser *textBrowser_51;
    QTextBrowser *textBrowser_52;
    QTextBrowser *textBrowser_53;
    QTextBrowser *textBrowser_54;
    QGridLayout *gridLayout_23;
    QTextBrowser *textBrowser_64;
    QTextBrowser *textBrowser_65;
    QTextBrowser *textBrowser_66;
    QTextBrowser *textBrowser_67;
    QTextBrowser *textBrowser_68;
    QTextBrowser *textBrowser_69;
    QTextBrowser *textBrowser_70;
    QTextBrowser *textBrowser_71;
    QTextBrowser *textBrowser_72;
    QGridLayout *gridLayout_25;
    QTextBrowser *textBrowser_82;
    QTextBrowser *textBrowser_83;
    QTextBrowser *textBrowser_84;
    QTextBrowser *textBrowser_85;
    QTextBrowser *textBrowser_86;
    QTextBrowser *textBrowser_87;
    QTextBrowser *textBrowser_88;
    QTextBrowser *textBrowser_89;
    QTextBrowser *textBrowser_90;
    QGridLayout *gridLayout_20;
    QTextBrowser *textBrowser_91;
    QTextBrowser *textBrowser_92;
    QTextBrowser *textBrowser_93;
    QTextBrowser *textBrowser_94;
    QTextBrowser *textBrowser_95;
    QTextBrowser *textBrowser_96;
    QTextBrowser *textBrowser_97;
    QTextBrowser *textBrowser_98;
    QTextBrowser *textBrowser_99;
    QGridLayout *gridLayout_21;
    QTextBrowser *textBrowser_100;
    QTextBrowser *textBrowser_101;
    QTextBrowser *textBrowser_102;
    QTextBrowser *textBrowser_103;
    QTextBrowser *textBrowser_104;
    QTextBrowser *textBrowser_105;
    QTextBrowser *textBrowser_106;
    QTextBrowser *textBrowser_107;
    QTextBrowser *textBrowser_108;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sudoku)
    {
        if (Sudoku->objectName().isEmpty())
            Sudoku->setObjectName(QStringLiteral("Sudoku"));
        Sudoku->resize(655, 658);
        centralWidget = new QWidget(Sudoku);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, -20, 731, 695));
        gridLayout_10 = new QGridLayout(gridLayoutWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout_11->addWidget(textBrowser, 1, 1, 1, 1);

        textBrowser_2 = new QTextBrowser(gridLayoutWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        gridLayout_11->addWidget(textBrowser_2, 1, 2, 1, 1);

        textBrowser_3 = new QTextBrowser(gridLayoutWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));

        gridLayout_11->addWidget(textBrowser_3, 2, 1, 1, 1);

        textBrowser_8 = new QTextBrowser(gridLayoutWidget);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));

        gridLayout_11->addWidget(textBrowser_8, 0, 0, 1, 1);

        textBrowser_9 = new QTextBrowser(gridLayoutWidget);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));

        gridLayout_11->addWidget(textBrowser_9, 0, 1, 1, 1);

        textBrowser_10 = new QTextBrowser(gridLayoutWidget);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));

        gridLayout_11->addWidget(textBrowser_10, 0, 2, 1, 1);

        textBrowser_11 = new QTextBrowser(gridLayoutWidget);
        textBrowser_11->setObjectName(QStringLiteral("textBrowser_11"));

        gridLayout_11->addWidget(textBrowser_11, 1, 0, 1, 1);

        textBrowser_12 = new QTextBrowser(gridLayoutWidget);
        textBrowser_12->setObjectName(QStringLiteral("textBrowser_12"));

        gridLayout_11->addWidget(textBrowser_12, 2, 0, 1, 1);

        textBrowser_13 = new QTextBrowser(gridLayoutWidget);
        textBrowser_13->setObjectName(QStringLiteral("textBrowser_13"));

        gridLayout_11->addWidget(textBrowser_13, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        textBrowser_7 = new QTextBrowser(gridLayoutWidget);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));

        gridLayout_22->addWidget(textBrowser_7, 1, 1, 1, 1);

        textBrowser_20 = new QTextBrowser(gridLayoutWidget);
        textBrowser_20->setObjectName(QStringLiteral("textBrowser_20"));

        gridLayout_22->addWidget(textBrowser_20, 1, 2, 1, 1);

        textBrowser_21 = new QTextBrowser(gridLayoutWidget);
        textBrowser_21->setObjectName(QStringLiteral("textBrowser_21"));

        gridLayout_22->addWidget(textBrowser_21, 2, 1, 1, 1);

        textBrowser_22 = new QTextBrowser(gridLayoutWidget);
        textBrowser_22->setObjectName(QStringLiteral("textBrowser_22"));

        gridLayout_22->addWidget(textBrowser_22, 0, 0, 1, 1);

        textBrowser_23 = new QTextBrowser(gridLayoutWidget);
        textBrowser_23->setObjectName(QStringLiteral("textBrowser_23"));

        gridLayout_22->addWidget(textBrowser_23, 0, 1, 1, 1);

        textBrowser_24 = new QTextBrowser(gridLayoutWidget);
        textBrowser_24->setObjectName(QStringLiteral("textBrowser_24"));

        gridLayout_22->addWidget(textBrowser_24, 0, 2, 1, 1);

        textBrowser_25 = new QTextBrowser(gridLayoutWidget);
        textBrowser_25->setObjectName(QStringLiteral("textBrowser_25"));

        gridLayout_22->addWidget(textBrowser_25, 1, 0, 1, 1);

        textBrowser_26 = new QTextBrowser(gridLayoutWidget);
        textBrowser_26->setObjectName(QStringLiteral("textBrowser_26"));

        gridLayout_22->addWidget(textBrowser_26, 2, 0, 1, 1);

        textBrowser_27 = new QTextBrowser(gridLayoutWidget);
        textBrowser_27->setObjectName(QStringLiteral("textBrowser_27"));

        gridLayout_22->addWidget(textBrowser_27, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_22, 0, 1, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        textBrowser_28 = new QTextBrowser(gridLayoutWidget);
        textBrowser_28->setObjectName(QStringLiteral("textBrowser_28"));

        gridLayout_13->addWidget(textBrowser_28, 1, 1, 1, 1);

        textBrowser_29 = new QTextBrowser(gridLayoutWidget);
        textBrowser_29->setObjectName(QStringLiteral("textBrowser_29"));

        gridLayout_13->addWidget(textBrowser_29, 1, 2, 1, 1);

        textBrowser_30 = new QTextBrowser(gridLayoutWidget);
        textBrowser_30->setObjectName(QStringLiteral("textBrowser_30"));

        gridLayout_13->addWidget(textBrowser_30, 2, 1, 1, 1);

        textBrowser_31 = new QTextBrowser(gridLayoutWidget);
        textBrowser_31->setObjectName(QStringLiteral("textBrowser_31"));

        gridLayout_13->addWidget(textBrowser_31, 0, 0, 1, 1);

        textBrowser_32 = new QTextBrowser(gridLayoutWidget);
        textBrowser_32->setObjectName(QStringLiteral("textBrowser_32"));

        gridLayout_13->addWidget(textBrowser_32, 0, 1, 1, 1);

        textBrowser_33 = new QTextBrowser(gridLayoutWidget);
        textBrowser_33->setObjectName(QStringLiteral("textBrowser_33"));

        gridLayout_13->addWidget(textBrowser_33, 0, 2, 1, 1);

        textBrowser_34 = new QTextBrowser(gridLayoutWidget);
        textBrowser_34->setObjectName(QStringLiteral("textBrowser_34"));

        gridLayout_13->addWidget(textBrowser_34, 1, 0, 1, 1);

        textBrowser_35 = new QTextBrowser(gridLayoutWidget);
        textBrowser_35->setObjectName(QStringLiteral("textBrowser_35"));

        gridLayout_13->addWidget(textBrowser_35, 2, 0, 1, 1);

        textBrowser_36 = new QTextBrowser(gridLayoutWidget);
        textBrowser_36->setObjectName(QStringLiteral("textBrowser_36"));

        gridLayout_13->addWidget(textBrowser_36, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_13, 0, 2, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        textBrowser_37 = new QTextBrowser(gridLayoutWidget);
        textBrowser_37->setObjectName(QStringLiteral("textBrowser_37"));

        gridLayout_14->addWidget(textBrowser_37, 1, 1, 1, 1);

        textBrowser_38 = new QTextBrowser(gridLayoutWidget);
        textBrowser_38->setObjectName(QStringLiteral("textBrowser_38"));

        gridLayout_14->addWidget(textBrowser_38, 1, 2, 1, 1);

        textBrowser_39 = new QTextBrowser(gridLayoutWidget);
        textBrowser_39->setObjectName(QStringLiteral("textBrowser_39"));

        gridLayout_14->addWidget(textBrowser_39, 2, 1, 1, 1);

        textBrowser_40 = new QTextBrowser(gridLayoutWidget);
        textBrowser_40->setObjectName(QStringLiteral("textBrowser_40"));

        gridLayout_14->addWidget(textBrowser_40, 0, 0, 1, 1);

        textBrowser_41 = new QTextBrowser(gridLayoutWidget);
        textBrowser_41->setObjectName(QStringLiteral("textBrowser_41"));

        gridLayout_14->addWidget(textBrowser_41, 0, 1, 1, 1);

        textBrowser_42 = new QTextBrowser(gridLayoutWidget);
        textBrowser_42->setObjectName(QStringLiteral("textBrowser_42"));

        gridLayout_14->addWidget(textBrowser_42, 0, 2, 1, 1);

        textBrowser_43 = new QTextBrowser(gridLayoutWidget);
        textBrowser_43->setObjectName(QStringLiteral("textBrowser_43"));

        gridLayout_14->addWidget(textBrowser_43, 1, 0, 1, 1);

        textBrowser_44 = new QTextBrowser(gridLayoutWidget);
        textBrowser_44->setObjectName(QStringLiteral("textBrowser_44"));

        gridLayout_14->addWidget(textBrowser_44, 2, 0, 1, 1);

        textBrowser_45 = new QTextBrowser(gridLayoutWidget);
        textBrowser_45->setObjectName(QStringLiteral("textBrowser_45"));

        gridLayout_14->addWidget(textBrowser_45, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_14, 1, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        textBrowser_46 = new QTextBrowser(gridLayoutWidget);
        textBrowser_46->setObjectName(QStringLiteral("textBrowser_46"));

        gridLayout_16->addWidget(textBrowser_46, 1, 1, 1, 1);

        textBrowser_47 = new QTextBrowser(gridLayoutWidget);
        textBrowser_47->setObjectName(QStringLiteral("textBrowser_47"));

        gridLayout_16->addWidget(textBrowser_47, 1, 2, 1, 1);

        textBrowser_48 = new QTextBrowser(gridLayoutWidget);
        textBrowser_48->setObjectName(QStringLiteral("textBrowser_48"));

        gridLayout_16->addWidget(textBrowser_48, 2, 1, 1, 1);

        textBrowser_49 = new QTextBrowser(gridLayoutWidget);
        textBrowser_49->setObjectName(QStringLiteral("textBrowser_49"));

        gridLayout_16->addWidget(textBrowser_49, 0, 0, 1, 1);

        textBrowser_50 = new QTextBrowser(gridLayoutWidget);
        textBrowser_50->setObjectName(QStringLiteral("textBrowser_50"));

        gridLayout_16->addWidget(textBrowser_50, 0, 1, 1, 1);

        textBrowser_51 = new QTextBrowser(gridLayoutWidget);
        textBrowser_51->setObjectName(QStringLiteral("textBrowser_51"));

        gridLayout_16->addWidget(textBrowser_51, 0, 2, 1, 1);

        textBrowser_52 = new QTextBrowser(gridLayoutWidget);
        textBrowser_52->setObjectName(QStringLiteral("textBrowser_52"));

        gridLayout_16->addWidget(textBrowser_52, 1, 0, 1, 1);

        textBrowser_53 = new QTextBrowser(gridLayoutWidget);
        textBrowser_53->setObjectName(QStringLiteral("textBrowser_53"));

        gridLayout_16->addWidget(textBrowser_53, 2, 0, 1, 1);

        textBrowser_54 = new QTextBrowser(gridLayoutWidget);
        textBrowser_54->setObjectName(QStringLiteral("textBrowser_54"));

        gridLayout_16->addWidget(textBrowser_54, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_16, 1, 1, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        textBrowser_64 = new QTextBrowser(gridLayoutWidget);
        textBrowser_64->setObjectName(QStringLiteral("textBrowser_64"));

        gridLayout_23->addWidget(textBrowser_64, 1, 1, 1, 1);

        textBrowser_65 = new QTextBrowser(gridLayoutWidget);
        textBrowser_65->setObjectName(QStringLiteral("textBrowser_65"));

        gridLayout_23->addWidget(textBrowser_65, 1, 2, 1, 1);

        textBrowser_66 = new QTextBrowser(gridLayoutWidget);
        textBrowser_66->setObjectName(QStringLiteral("textBrowser_66"));

        gridLayout_23->addWidget(textBrowser_66, 2, 1, 1, 1);

        textBrowser_67 = new QTextBrowser(gridLayoutWidget);
        textBrowser_67->setObjectName(QStringLiteral("textBrowser_67"));

        gridLayout_23->addWidget(textBrowser_67, 0, 0, 1, 1);

        textBrowser_68 = new QTextBrowser(gridLayoutWidget);
        textBrowser_68->setObjectName(QStringLiteral("textBrowser_68"));

        gridLayout_23->addWidget(textBrowser_68, 0, 1, 1, 1);

        textBrowser_69 = new QTextBrowser(gridLayoutWidget);
        textBrowser_69->setObjectName(QStringLiteral("textBrowser_69"));

        gridLayout_23->addWidget(textBrowser_69, 0, 2, 1, 1);

        textBrowser_70 = new QTextBrowser(gridLayoutWidget);
        textBrowser_70->setObjectName(QStringLiteral("textBrowser_70"));

        gridLayout_23->addWidget(textBrowser_70, 1, 0, 1, 1);

        textBrowser_71 = new QTextBrowser(gridLayoutWidget);
        textBrowser_71->setObjectName(QStringLiteral("textBrowser_71"));

        gridLayout_23->addWidget(textBrowser_71, 2, 0, 1, 1);

        textBrowser_72 = new QTextBrowser(gridLayoutWidget);
        textBrowser_72->setObjectName(QStringLiteral("textBrowser_72"));

        gridLayout_23->addWidget(textBrowser_72, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_23, 1, 2, 1, 1);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setSpacing(6);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        textBrowser_82 = new QTextBrowser(gridLayoutWidget);
        textBrowser_82->setObjectName(QStringLiteral("textBrowser_82"));

        gridLayout_25->addWidget(textBrowser_82, 1, 1, 1, 1);

        textBrowser_83 = new QTextBrowser(gridLayoutWidget);
        textBrowser_83->setObjectName(QStringLiteral("textBrowser_83"));

        gridLayout_25->addWidget(textBrowser_83, 1, 2, 1, 1);

        textBrowser_84 = new QTextBrowser(gridLayoutWidget);
        textBrowser_84->setObjectName(QStringLiteral("textBrowser_84"));

        gridLayout_25->addWidget(textBrowser_84, 2, 1, 1, 1);

        textBrowser_85 = new QTextBrowser(gridLayoutWidget);
        textBrowser_85->setObjectName(QStringLiteral("textBrowser_85"));

        gridLayout_25->addWidget(textBrowser_85, 0, 0, 1, 1);

        textBrowser_86 = new QTextBrowser(gridLayoutWidget);
        textBrowser_86->setObjectName(QStringLiteral("textBrowser_86"));

        gridLayout_25->addWidget(textBrowser_86, 0, 1, 1, 1);

        textBrowser_87 = new QTextBrowser(gridLayoutWidget);
        textBrowser_87->setObjectName(QStringLiteral("textBrowser_87"));

        gridLayout_25->addWidget(textBrowser_87, 0, 2, 1, 1);

        textBrowser_88 = new QTextBrowser(gridLayoutWidget);
        textBrowser_88->setObjectName(QStringLiteral("textBrowser_88"));

        gridLayout_25->addWidget(textBrowser_88, 1, 0, 1, 1);

        textBrowser_89 = new QTextBrowser(gridLayoutWidget);
        textBrowser_89->setObjectName(QStringLiteral("textBrowser_89"));

        gridLayout_25->addWidget(textBrowser_89, 2, 0, 1, 1);

        textBrowser_90 = new QTextBrowser(gridLayoutWidget);
        textBrowser_90->setObjectName(QStringLiteral("textBrowser_90"));

        gridLayout_25->addWidget(textBrowser_90, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_25, 2, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        textBrowser_91 = new QTextBrowser(gridLayoutWidget);
        textBrowser_91->setObjectName(QStringLiteral("textBrowser_91"));

        gridLayout_20->addWidget(textBrowser_91, 1, 1, 1, 1);

        textBrowser_92 = new QTextBrowser(gridLayoutWidget);
        textBrowser_92->setObjectName(QStringLiteral("textBrowser_92"));

        gridLayout_20->addWidget(textBrowser_92, 1, 2, 1, 1);

        textBrowser_93 = new QTextBrowser(gridLayoutWidget);
        textBrowser_93->setObjectName(QStringLiteral("textBrowser_93"));

        gridLayout_20->addWidget(textBrowser_93, 2, 1, 1, 1);

        textBrowser_94 = new QTextBrowser(gridLayoutWidget);
        textBrowser_94->setObjectName(QStringLiteral("textBrowser_94"));

        gridLayout_20->addWidget(textBrowser_94, 0, 0, 1, 1);

        textBrowser_95 = new QTextBrowser(gridLayoutWidget);
        textBrowser_95->setObjectName(QStringLiteral("textBrowser_95"));

        gridLayout_20->addWidget(textBrowser_95, 0, 1, 1, 1);

        textBrowser_96 = new QTextBrowser(gridLayoutWidget);
        textBrowser_96->setObjectName(QStringLiteral("textBrowser_96"));

        gridLayout_20->addWidget(textBrowser_96, 0, 2, 1, 1);

        textBrowser_97 = new QTextBrowser(gridLayoutWidget);
        textBrowser_97->setObjectName(QStringLiteral("textBrowser_97"));

        gridLayout_20->addWidget(textBrowser_97, 1, 0, 1, 1);

        textBrowser_98 = new QTextBrowser(gridLayoutWidget);
        textBrowser_98->setObjectName(QStringLiteral("textBrowser_98"));

        gridLayout_20->addWidget(textBrowser_98, 2, 0, 1, 1);

        textBrowser_99 = new QTextBrowser(gridLayoutWidget);
        textBrowser_99->setObjectName(QStringLiteral("textBrowser_99"));

        gridLayout_20->addWidget(textBrowser_99, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_20, 2, 1, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(6);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        textBrowser_100 = new QTextBrowser(gridLayoutWidget);
        textBrowser_100->setObjectName(QStringLiteral("textBrowser_100"));

        gridLayout_21->addWidget(textBrowser_100, 1, 1, 1, 1);

        textBrowser_101 = new QTextBrowser(gridLayoutWidget);
        textBrowser_101->setObjectName(QStringLiteral("textBrowser_101"));

        gridLayout_21->addWidget(textBrowser_101, 1, 2, 1, 1);

        textBrowser_102 = new QTextBrowser(gridLayoutWidget);
        textBrowser_102->setObjectName(QStringLiteral("textBrowser_102"));

        gridLayout_21->addWidget(textBrowser_102, 2, 1, 1, 1);

        textBrowser_103 = new QTextBrowser(gridLayoutWidget);
        textBrowser_103->setObjectName(QStringLiteral("textBrowser_103"));

        gridLayout_21->addWidget(textBrowser_103, 0, 0, 1, 1);

        textBrowser_104 = new QTextBrowser(gridLayoutWidget);
        textBrowser_104->setObjectName(QStringLiteral("textBrowser_104"));

        gridLayout_21->addWidget(textBrowser_104, 0, 1, 1, 1);

        textBrowser_105 = new QTextBrowser(gridLayoutWidget);
        textBrowser_105->setObjectName(QStringLiteral("textBrowser_105"));

        gridLayout_21->addWidget(textBrowser_105, 0, 2, 1, 1);

        textBrowser_106 = new QTextBrowser(gridLayoutWidget);
        textBrowser_106->setObjectName(QStringLiteral("textBrowser_106"));

        gridLayout_21->addWidget(textBrowser_106, 1, 0, 1, 1);

        textBrowser_107 = new QTextBrowser(gridLayoutWidget);
        textBrowser_107->setObjectName(QStringLiteral("textBrowser_107"));

        gridLayout_21->addWidget(textBrowser_107, 2, 0, 1, 1);

        textBrowser_108 = new QTextBrowser(gridLayoutWidget);
        textBrowser_108->setObjectName(QStringLiteral("textBrowser_108"));

        gridLayout_21->addWidget(textBrowser_108, 2, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_21, 2, 2, 1, 1);

        Sudoku->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sudoku);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 21));
        Sudoku->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Sudoku);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Sudoku->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Sudoku);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Sudoku->setStatusBar(statusBar);

        retranslateUi(Sudoku);

        QMetaObject::connectSlotsByName(Sudoku);
    } // setupUi

    void retranslateUi(QMainWindow *Sudoku)
    {
        Sudoku->setWindowTitle(QApplication::translate("Sudoku", "Sudoku", 0));
    } // retranslateUi

};

namespace Ui {
    class Sudoku: public Ui_Sudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
