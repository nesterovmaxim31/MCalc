#include <iostream>
#include <QString>


class Value {
    public:
        int CurrentNumberSystemMode = 10;
        int CurrentOperand = 0;
        int CurrentNumber = 1;

        QString firstNumber;
        QString secondNumber;
        QString GenerateString();
        QString GetStringWithoutLastSymbol(QString);

        void setValueofCurrentNumber(QString);
        void DeleteLastSymbol();
        void output_current();
};


