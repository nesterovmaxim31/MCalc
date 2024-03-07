#include "CurrentValue.h"


QString Value::GenerateString()
{
    QString Operands[20] = {" = ", " + ", " - ", " * ", " / ", " ^ ", " mod "};
    if (firstNumber == "")
    {
        firstNumber = "0";
    }
    QString Answer = firstNumber;
    if (CurrentOperand != 0)
    {
        Answer += Operands[CurrentOperand];
    }
    if (CurrentNumber == 2)
    {
        Answer += secondNumber;
    }
    return Answer;
}

void Value::setValueofCurrentNumber(QString change)
{
    if (CurrentNumber == 1)
    {
        if (change != "")
        {
            if (change == "." && (firstNumber == "" || firstNumber =="0"))
            {
                firstNumber = "0";
            }
            else if (firstNumber == "0")
            {
                firstNumber = "";
            }
            firstNumber += change;
        }
        else
        {
            firstNumber = "0";
        }
    }
    else
    {
        if (change != "")
        {
            if (change == "." && (secondNumber == "" || secondNumber == "0"))
            {
                secondNumber = "0";
            }
            else if (secondNumber == "0")
            {
                secondNumber = "";
            }
            secondNumber += change;
        }
        else
        {
            secondNumber = "0";
        }
    }
}

QString Value::GetStringWithoutLastSymbol(QString SomeString)
{
    QString Answer;
    for (int i = 0; i < SomeString.length() - 1; i++)
    {
        Answer += SomeString[i];
    }
    return Answer;
}

void Value::DeleteLastSymbol()
{
    // printf("Current Operand: %d, Current Number: %d, firstNuber: %s, secondNumber: %s\n", CurrentOperand, CurrentNumber, firstNumber.toStdString().c_str(), secondNumber.toStdString().c_str());
    if ((CurrentOperand == 0 && firstNumber.length() == 1) || (CurrentOperand == 0 && firstNumber.length() == 2 && firstNumber[0] == '-'))
    {
        firstNumber = "0";
    }
    else if (CurrentOperand == 0 && (firstNumber != "" || firstNumber != "0"))
    {
        firstNumber = GetStringWithoutLastSymbol(firstNumber);
    }
    else if (CurrentOperand != 0 && (secondNumber == "" || secondNumber == "0" ))
    {
        CurrentOperand = 0;
        CurrentNumber = 1;
    }
    else if (secondNumber.length() == 2 && secondNumber[0] == '-' )
    {
        secondNumber = "";
    }
    else if (CurrentOperand != 0 && (secondNumber != "" || secondNumber != "0"))
    {
        secondNumber = GetStringWithoutLastSymbol(secondNumber);
    }
}
