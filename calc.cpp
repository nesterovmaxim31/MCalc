#include "calc.h"
#include "./ui_calc.h"
#include "MathOperations.cpp"
#include "CurrentValue.cpp"


Calc::Calc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Calc)
{
    ui->setupUi(this);
}

Calc::~Calc()
{
    delete ui;
}

void Calc::on_ACButton_clicked()
{
    CurrentNumber = 1;
    CurrentOperand = 0;
    CurrentNumberSystemMode = 10;
    secondNumber = "";
    setValueofCurrentNumber("");
    ui -> lineEdit -> setText(GenerateString());
    ui -> spinBox -> setValue(10);
}

void Calc::on_AC1Button_clicked()
{
    DeleteLastSymbol();
    ui->lineEdit->setText(GenerateString());
}

// NUMBERS
void Calc::on_zeroButton_clicked()
{
    setValueofCurrentNumber("0");
    ui->lineEdit->setText(GenerateString());
}

void Calc::on_oneButton_clicked()
{
    setValueofCurrentNumber("1");
    ui->lineEdit->setText(GenerateString());
}

void Calc::on_twoButton_clicked()
{
    if (CurrentNumberSystemMode >= 3)
    {
        setValueofCurrentNumber("2");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_threeButton_clicked()
{
    if (CurrentNumberSystemMode >= 4)
    {
        setValueofCurrentNumber("3");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}


void Calc::on_fourButton_clicked()
{
    if (CurrentNumberSystemMode >= 5)
    {
        setValueofCurrentNumber("4");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_fiveButton_clicked()
{
    if (CurrentNumberSystemMode >= 6)
    {
        setValueofCurrentNumber("5");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}


void Calc::on_sevenButton_clicked()
{
    if (CurrentNumberSystemMode >= 8)
    {
        setValueofCurrentNumber("7");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_eightButton_clicked()
{
    if (CurrentNumberSystemMode >= 9)
    {
        setValueofCurrentNumber("8");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_sixButton_clicked()
{
    if (CurrentNumberSystemMode >= 7)
    {
        setValueofCurrentNumber("6");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_nineButton_clicked()
{
    if (CurrentNumberSystemMode >= 10)
    {
        setValueofCurrentNumber("9");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

void Calc::on_dotButton_clicked()
{
    if (CurrentNumberSystemMode == 10)
    {
        if ((CurrentNumber == 1 && IfNumberIsDouble(firstNumber) != true) || (CurrentNumber == 2 && IfNumberIsDouble(secondNumber) != true))
        {
        setValueofCurrentNumber(".");
        }
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// LETTERS
// A
void Calc::on_AButton_clicked()
{
    if (CurrentNumberSystemMode >= 11)
    {
        setValueofCurrentNumber("A");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// B
void Calc::on_BButton_clicked()
{
    if (CurrentNumberSystemMode >= 12)
    {
        setValueofCurrentNumber("B");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// C
void Calc::on_CButton_clicked()
{
    if (CurrentNumberSystemMode >= 13)
    {
        setValueofCurrentNumber("C");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// D
void Calc::on_DButton_clicked()
{
    if (CurrentNumberSystemMode >= 14)
    {
        setValueofCurrentNumber("D");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// E
void Calc::on_EButton_clicked()
{
    if (CurrentNumberSystemMode >= 15)
    {
        setValueofCurrentNumber("E");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// F
void Calc::on_FButton_clicked()
{
    if (CurrentNumberSystemMode >= 16)
    {
        setValueofCurrentNumber("F");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// G
void Calc::on_GButton_clicked()
{
    if (CurrentNumberSystemMode >= 17)
    {
        setValueofCurrentNumber("G");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// H
void Calc::on_HButton_clicked()
{
    if (CurrentNumberSystemMode >= 18)
    {
        setValueofCurrentNumber("H");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// I
void Calc::on_IButton_clicked()
{
    if (CurrentNumberSystemMode >= 19)
    {
        setValueofCurrentNumber("I");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// J
void Calc::on_JButton_clicked()
{
    if (CurrentNumberSystemMode >= 20)
    {
        setValueofCurrentNumber("J");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// K
void Calc::on_KButton_clicked()
{
    if (CurrentNumberSystemMode >= 21)
    {
        setValueofCurrentNumber("K");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// L
void Calc::on_LButton_clicked()
{
    if (CurrentNumberSystemMode >= 22)
    {
        setValueofCurrentNumber("L");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// M
void Calc::on_MButton_clicked()
{
    if (CurrentNumberSystemMode >= 23)
    {
        setValueofCurrentNumber("M");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// N
void Calc::on_NButton_clicked()
{
    if (CurrentNumberSystemMode >= 24)
    {
        setValueofCurrentNumber("N");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// O
void Calc::on_OButton_clicked()
{
    if (CurrentNumberSystemMode >= 25)
    {
        setValueofCurrentNumber("O");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// P
void Calc::on_PButton_clicked()
{
    if (CurrentNumberSystemMode >= 26)
    {
        setValueofCurrentNumber("P");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// Q
void Calc::on_QButton_clicked()
{
    if (CurrentNumberSystemMode >= 27)
    {
        setValueofCurrentNumber("Q");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// R
void Calc::on_RButton_clicked()
{
    if (CurrentNumberSystemMode >= 28)
    {
        setValueofCurrentNumber("R");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// S
void Calc::on_SButton_clicked()
{
    if (CurrentNumberSystemMode >= 29)
    {
        setValueofCurrentNumber("S");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// T
void Calc::on_TButton_clicked()
{
    if (CurrentNumberSystemMode >= 30)
    {
        setValueofCurrentNumber("T");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// U
void Calc::on_UButton_clicked()
{
    if (CurrentNumberSystemMode >= 31)
    {
        setValueofCurrentNumber("U");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// V
void Calc::on_VButton_clicked()
{
    if (CurrentNumberSystemMode >= 32)
    {
        setValueofCurrentNumber("V");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// W
void Calc::on_WButton_clicked()
{
    if (CurrentNumberSystemMode >= 33)
    {
        setValueofCurrentNumber("W");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// X
void Calc::on_XButton_clicked()
{
    if (CurrentNumberSystemMode >= 34)
    {
        setValueofCurrentNumber("X");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// Y
void Calc::on_YButton_clicked()
{
    if (CurrentNumberSystemMode >= 35)
    {
        setValueofCurrentNumber("Y");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// Z
void Calc::on_ZButton_clicked()
{
    if (CurrentNumberSystemMode == 36)
    {
        setValueofCurrentNumber("Z");
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("You have chosen the wrong number system!");
        msgBox.exec();
    }
}

// OPERATIONS
// squart
void Calc::on_squareButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 5;
    secondNumber = "2";
    on_equalsButton_clicked();
    ui->lineEdit->setText(GenerateString());
}

// root
void Calc::on_rootButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 8;
    secondNumber = "1";
    on_equalsButton_clicked();
    ui->lineEdit->setText(GenerateString());
}

// factorial
void Calc::on_factorialButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 7;
    secondNumber = "0";
    on_equalsButton_clicked();
    ui->lineEdit->setText(GenerateString());
}

void Calc::on_spinBox_valueChanged(int arg1)
{
    on_equalsButton_clicked();
    firstNumber = Converter(firstNumber, CurrentNumberSystemMode, arg1);
    CurrentNumberSystemMode = arg1;
    ui -> lineEdit -> setText(GenerateString());
}

void Calc::on_binaryButton_clicked()
{
    firstNumber = Converter(firstNumber, CurrentNumberSystemMode, 2);
    CurrentNumberSystemMode = 2;
    ui -> lineEdit -> setText(GenerateString());
    ui -> spinBox -> setValue(2);
}

void Calc::on_octalButto_clicked()
{
    firstNumber = Converter(firstNumber, CurrentNumberSystemMode, 8);
    CurrentNumberSystemMode = 8;
    ui -> lineEdit -> setText(GenerateString());
    ui -> spinBox -> setValue(8);
}

void Calc::on_decimalButton_clicked()
{
    firstNumber = Converter(firstNumber, CurrentNumberSystemMode, 10);
    CurrentNumberSystemMode = 10;
    ui -> lineEdit -> setText(GenerateString());
    ui -> spinBox -> setValue(10);
}

void Calc::on_hexButton_clicked()
{
    firstNumber = Converter(firstNumber, CurrentNumberSystemMode, 16);
    CurrentNumberSystemMode = 16;
    ui -> lineEdit -> setText(GenerateString());
    ui -> spinBox -> setValue(16);
}

// plus
void Calc::on_plusButton_clicked()
{
    
    on_equalsButton_clicked();
    CurrentOperand = 1;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

// minus
void Calc::on_minusButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 2;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

// multiply
void Calc::on_multiplyButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 3;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

// divide
void Calc::on_divideButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 4;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

void Calc::on_plusminusButton_clicked()
{
    if (CurrentNumberSystemMode == 10)
    {
        if (CurrentNumber == 1)
        {
            firstNumber = ChangeSignofCurrentNumber(CurrentNumber, firstNumber, secondNumber);
        }
        else
        {
            secondNumber = ChangeSignofCurrentNumber(CurrentNumber, firstNumber, secondNumber);
        }
        ui->lineEdit->setText(GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("For perform this operation choose decimal number system!");
        msgBox.exec();
    }
}

void Calc::on_equalsButton_clicked()
{
    if (firstNumber != "" && secondNumber != "")
    {
        if (secondNumber == "0" && (CurrentOperand == 4 || CurrentOperand == 6))
        {
            QMessageBox msgBox;
            msgBox.setText("We can't divide by zero!");
            msgBox.exec();
        }
        else
        {
            CurrentNumber = 1;
            firstNumber = Equal(firstNumber, secondNumber, CurrentOperand, CurrentNumberSystemMode);
            CurrentOperand = 0;
            secondNumber = "";
            ui->lineEdit->setText(GenerateString());
        }
    }
    else
    {
        CurrentNumber = 1;
        CurrentOperand = 0;
        secondNumber = "";
    }   
}

// 1 / a
void Calc::on_reciprocalButton_clicked()
{
    on_equalsButton_clicked();
    if (CurrentNumberSystemMode == 10)
    {
        if (firstNumber == "0")
        {
            QMessageBox msgBox;
            msgBox.setText("We can't divide by zero!");
            msgBox.exec();
        }
        else
        {
            firstNumber = QString::number(1 / firstNumber.toDouble());
            ui -> lineEdit -> setText(GenerateString());
        }
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("For perform this operation choose decimal number system!");
        msgBox.exec();
    }
    
}

// a ^ b
void Calc::on_topowerButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 5;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

// a mod b
void Calc::on_modButton_clicked()
{
    on_equalsButton_clicked();
    CurrentOperand = 6;
    CurrentNumber = 2;
    ui -> lineEdit -> setText(GenerateString());
}

void Calc::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return)
    {
        ui -> equalsButton -> animateClick();
    }
    else if (event -> key() == Qt::Key_Backspace)
    {
        ui -> AC1Button -> animateClick();
    }
    QChar c = ((char) event -> key());    
    char m = c.unicode();    
    switch (m)
    {
        case '0':
            ui -> zeroButton -> animateClick();
            break;
        case '1':
            ui -> oneButton -> animateClick();
            break;
        case '2':
            ui -> twoButton -> animateClick();
            break;
        case '3':
            ui -> threeButton -> animateClick();
            break;
        case '4':
            ui -> fourButton -> animateClick();
            break;
        case '5':
            ui -> fiveButton -> animateClick();
            break;
        case '6':
            ui -> sixButton -> animateClick();
            break;
        case '7':
            ui -> sevenButton -> animateClick();
            break;
        case '8':
            ui -> eightButton -> animateClick();
            break;
        case '9':
            ui -> nineButton -> animateClick();
            break;
        case '+':
            ui -> plusButton -> animateClick();
            break;
        case '-':
            ui -> minusButton -> animateClick();
            break;
        case '*':
            ui -> multiplyButton -> animateClick();
            break;
        case '/':
            ui -> divideButton -> animateClick();
            break;
        case '^':
            ui -> topowerButton -> animateClick();
            break;
        case 'A':
            ui -> AButton -> animateClick();
            break;
        case 'B':
            ui -> BButton -> animateClick();
            break;
        case 'C':
            ui -> CButton -> animateClick();
            break;
        case 'D':
            ui -> DButton -> animateClick();
            break;
        case 'E':
            ui -> EButton -> animateClick();
            break;
        case 'F':
            ui -> FButton -> animateClick();
            break;
        case 'G':
            ui -> GButton -> animateClick();
            break;
        case 'H':
            ui -> HButton -> animateClick();
            break;
        case 'I':
            ui -> IButton -> animateClick();
            break;
        case 'J':
            ui -> JButton -> animateClick();
            break;
        case 'K':
            ui -> KButton -> animateClick();
            break;
        case 'L':
            ui -> LButton -> animateClick();
            break;
        case 'M':
            ui -> MButton -> animateClick();
            break;
        case 'N':
            ui -> NButton -> animateClick();
            break;
        case 'O':
            ui -> OButton -> animateClick();
            break;
        case 'P':
            ui -> PButton -> animateClick();
            break;
        case 'Q':
            ui -> QButton -> animateClick();
            break;
        case 'R':
            ui -> RButton -> animateClick();
            break;
        case 'S':
            ui -> SButton -> animateClick();
            break;
        case 'T':
            ui -> TButton -> animateClick();
            break;
        case 'U':
            ui -> UButton -> animateClick();
            break;
        case 'V':
            ui -> VButton -> animateClick();
            break;
        case 'W':
            ui -> WButton -> animateClick();
            break;
        case 'X':
            ui -> XButton -> animateClick();
            break;
        case 'Y':
            ui -> YButton -> animateClick();
            break;
        case 'Z':
            ui -> ZButton -> animateClick();
            break;
        case '.':
            ui -> dotButton -> animateClick();
            break;
        case ',':
            ui -> dotButton -> animateClick();
            break;
        case ' ':
            ui -> equalsButton -> animateClick();
            break;
    }
}
