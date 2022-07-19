#pragma once

#ifndef CALC_H
#define CALC_H

#include <cmath>
#include <QDialog>
#include <QPushButton>
#include <QEvent>
#include <QKeyEvent>
#include <QMessageBox>
#include <QClipboard>
#include <QGuiApplication>


QT_BEGIN_NAMESPACE
namespace Ui { class Calc; }
QT_END_NAMESPACE


class Calc : public QDialog
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();


private slots:
    
    void on_oneButton_clicked();

    void on_ACButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_sevenButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_squareButton_clicked();

    void on_rootButton_clicked();

    void on_factorialButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

    void on_plusminusButton_clicked();

    void on_equalsButton_clicked();

    void on_BButton_clicked();

    void on_AButton_clicked();

    void on_CButton_clicked();

    void on_DButton_clicked();

    void on_EButton_clicked();

    void on_FButton_clicked();

    void on_GButton_clicked();

    void on_HButton_clicked();

    void on_IButton_clicked();

    void on_JButton_clicked();

    void on_KButton_clicked();

    void on_LButton_clicked();

    void on_MButton_clicked();

    void on_NButton_clicked();

    void on_OButton_clicked();

    void on_PButton_clicked();

    void on_QButton_clicked();

    void on_RButton_clicked();

    void on_SButton_clicked();

    void on_TButton_clicked();

    void on_UButton_clicked();

    void on_VButton_clicked();

    void on_WButton_clicked();

    void on_XButton_clicked();

    void on_YButton_clicked();

    void on_ZButton_clicked();

    void on_AC1Button_clicked();

    void on_dotButton_clicked();

    void on_copyresultButton_clicked();

    void on_reciprocalButton_clicked();

    void on_topowerButton_clicked();

    void on_modButton_clicked();

    void on_spinBox_valueChanged(int arg1);
    
    void keyPressEvent(QKeyEvent *event) override;

    void on_decimalButton_clicked();

    void on_binaryButton_clicked();

    void on_octalButto_clicked();

    void on_hexButton_clicked();

private:
    Ui::Calc *ui;
};
#endif // CALC_H
