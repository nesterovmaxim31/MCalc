#include "calc.h"
#include "./ui_calc.h"



Calc::Calc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Calc)
{
    ui->setupUi(this);
    Value x;
}

Calc::~Calc()
{
    delete ui;
}

 void Calc::on_ACButton_clicked()
{
    x.CurrentNumber = 1;
    x.CurrentOperand = 0;
    x.CurrentNumberSystemMode = 10;
    x.secondNumber = "";
    x.setValueofCurrentNumber("");
    ui -> lineEdit -> setText(x.GenerateString());
    ui -> spinBox -> setValue(10);
} 

void Calc::on_CButton_2_clicked()
{
    x.CurrentNumber = 1;
    x.CurrentOperand = 0;
    x.secondNumber = "";
    x.setValueofCurrentNumber("");
    ui -> lineEdit -> setText(x.GenerateString());
}

void Calc::on_AC1Button_clicked()
{
    x.DeleteLastSymbol();
    ui->lineEdit->setText(x.GenerateString());
}

// NUMBERS
void Calc::on_zeroButton_clicked()
{
    x.setValueofCurrentNumber("0");
    ui->lineEdit->setText(x.GenerateString());
}

void Calc::on_oneButton_clicked()
{
    x.setValueofCurrentNumber("1");
    ui -> lineEdit -> setText(x.GenerateString());
}

void Calc::on_twoButton_clicked()
{
    if (x.CurrentNumberSystemMode >= 3)
    {
        x.setValueofCurrentNumber("2");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 4)
    {
        x.setValueofCurrentNumber("3");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 5)
    {
        x.setValueofCurrentNumber("4");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 6)
    {
        x.setValueofCurrentNumber("5");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 8)
    {
        x.setValueofCurrentNumber("7");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 9)
    {
        x.setValueofCurrentNumber("8");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 7)
    {
        x.setValueofCurrentNumber("6");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 10)
    {
        x.setValueofCurrentNumber("9");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode == 10)
    {
        if ((x.CurrentNumber == 1 && IfNumberIsDouble(x.firstNumber) != true) || (x.CurrentNumber == 2 && IfNumberIsDouble(x.secondNumber) != true))
        {
        x.setValueofCurrentNumber(".");
        }
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 11)
    {
        x.setValueofCurrentNumber("A");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 12)
    {
        x.setValueofCurrentNumber("B");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 13)
    {
        x.setValueofCurrentNumber("C");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 14)
    {
        x.setValueofCurrentNumber("D");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 15)
    {
        x.setValueofCurrentNumber("E");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 16)
    {
        x.setValueofCurrentNumber("F");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 17)
    {
        x.setValueofCurrentNumber("G");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 18)
    {
        x.setValueofCurrentNumber("H");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 19)
    {
        x.setValueofCurrentNumber("I");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 20)
    {
        x.setValueofCurrentNumber("J");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 21)
    {
        x.setValueofCurrentNumber("K");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 22)
    {
        x.setValueofCurrentNumber("L");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 23)
    {
        x.setValueofCurrentNumber("M");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 24)
    {
        x.setValueofCurrentNumber("N");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 25)
    {
        x.setValueofCurrentNumber("O");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 26)
    {
        x.setValueofCurrentNumber("P");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 27)
    {
        x.setValueofCurrentNumber("Q");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 28)
    {
        x.setValueofCurrentNumber("R");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 29)
    {
        x.setValueofCurrentNumber("S");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 30)
    {
        x.setValueofCurrentNumber("T");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 31)
    {
        x.setValueofCurrentNumber("U");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 32)
    {
        x.setValueofCurrentNumber("V");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 33)
    {
        x.setValueofCurrentNumber("W");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 34)
    {
        x.setValueofCurrentNumber("X");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode >= 35)
    {
        x.setValueofCurrentNumber("Y");
        ui->lineEdit->setText(x.GenerateString());
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
    if (x.CurrentNumberSystemMode == 36)
    {
        x.setValueofCurrentNumber("Z");
        ui->lineEdit->setText(x.GenerateString());
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
    x.CurrentOperand = 5;
    x.secondNumber = "2";
    on_equalsButton_clicked();
    ui->lineEdit->setText(x.GenerateString());
}

// root
void Calc::on_rootButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 8;
    x.secondNumber = "1";
    on_equalsButton_clicked();
    ui->lineEdit->setText(x.GenerateString());
}

// factorial
void Calc::on_factorialButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 7;
    x.secondNumber = "0";
    on_equalsButton_clicked();
    ui->lineEdit->setText(x.GenerateString());
}

void Calc::on_spinBox_valueChanged(int arg1)
{
    on_equalsButton_clicked();
    x.firstNumber = Converter(x.firstNumber, x.CurrentNumberSystemMode, arg1);
    x.CurrentNumberSystemMode = arg1;
    ui -> lineEdit -> setText(x.GenerateString());
}

void Calc::on_binaryButton_clicked()
{
    on_equalsButton_clicked();
    x.firstNumber = Converter(x.firstNumber, x.CurrentNumberSystemMode, 2);
    x.CurrentNumberSystemMode = 2;
    ui -> lineEdit -> setText(x.GenerateString());
    ui -> spinBox -> setValue(2);
}

void Calc::on_octalButto_clicked()
{
    on_equalsButton_clicked();
    x.firstNumber = Converter(x.firstNumber, x.CurrentNumberSystemMode, 8);
    x.CurrentNumberSystemMode = 8;
    ui -> lineEdit -> setText(x.GenerateString());
    ui -> spinBox -> setValue(8);
}

void Calc::on_decimalButton_clicked()
{
    on_equalsButton_clicked();
    x.firstNumber = Converter(x.firstNumber, x.CurrentNumberSystemMode, 10);
    x.CurrentNumberSystemMode = 10;
    ui -> lineEdit -> setText(x.GenerateString());
    ui -> spinBox -> setValue(10);
}

void Calc::on_hexButton_clicked()
{
    on_equalsButton_clicked();
    x.firstNumber = Converter(x.firstNumber, x.CurrentNumberSystemMode, 16);
    x.CurrentNumberSystemMode = 16;
    ui -> lineEdit -> setText(x.GenerateString());
    ui -> spinBox -> setValue(16);
}

// plus
void Calc::on_plusButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 1;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}

// minus
void Calc::on_minusButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 2;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}

// multiply
void Calc::on_multiplyButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 3;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}

// divide
void Calc::on_divideButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 4;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}
void Calc::on_plusminusButton_clicked()
{
    if (x.CurrentNumberSystemMode == 10)
    {
        if (x.CurrentNumber == 1)
        {
            x.firstNumber = ChangeSignofCurrentNumber(x.CurrentNumber, x.firstNumber, x.secondNumber);
        }
        else
        {
            x.secondNumber = ChangeSignofCurrentNumber(x.CurrentNumber, x.firstNumber, x.secondNumber);
        }
        ui->lineEdit->setText(x.GenerateString());
    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("For perform this operation choose decimal number system!");
        msgBox.exec();
    }
}

void Calc::on_copyresultButton_clicked()
{
    on_equalsButton_clicked();
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard -> setText(x.firstNumber);
} 

void Calc::on_equalsButton_clicked()
{
    if (x.firstNumber != "" && x.secondNumber != "")
    {
        if ((x.secondNumber.count('0') + IfNumberIsDouble(x.secondNumber)) == x.secondNumber.length() && (x.CurrentOperand == 4 || x.CurrentOperand == 6))
        {
            QMessageBox msgBox;
            msgBox.setText("We can't divide by zero!");
            msgBox.exec();
        }
        else
        {
            x.CurrentNumber = 1;
            x.firstNumber = Equal(x.firstNumber, x.secondNumber, x.CurrentOperand, x.CurrentNumberSystemMode);
            x.CurrentOperand = 0;
            x.secondNumber = "";
            ui -> lineEdit->setText(x.GenerateString());
        }
    }
    else
    {
        x.CurrentNumber = 1;
        x.CurrentOperand = 0;
        x.secondNumber = "";
        ui -> lineEdit -> setText(x.GenerateString());
    }   
}

// 1 / a
void Calc::on_reciprocalButton_clicked()
{
    on_equalsButton_clicked();
    if (x.CurrentNumberSystemMode == 10)
    {
        if (x.firstNumber == "0")
        {
            QMessageBox msgBox;
            msgBox.setText("We can't divide by zero!");
            msgBox.exec();
        }
        else
        {
            x.firstNumber = QString::number(1 / x.firstNumber.toDouble());
            ui -> lineEdit -> setText(x.GenerateString());
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
    x.CurrentOperand = 5;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}

// a mod b
void Calc::on_modButton_clicked()
{
    on_equalsButton_clicked();
    x.CurrentOperand = 6;
    x.CurrentNumber = 2;
    ui -> lineEdit -> setText(x.GenerateString());
}

void Calc::on_aboutButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("MCalc is currently covered under the MIT license and based on Qt\nMy contacts:\nemail: maxgoonfuture@gmail.com\nhttps://github.com/nesterovmaxim31/MCalc");
    msgBox.exec();
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

