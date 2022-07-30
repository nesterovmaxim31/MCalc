#include <cmath>
#include <cstdio>
#include <iostream>


bool IfNumberIsDouble(QString Number)
{
   for (int i = 0; i < Number.length(); i++)
   {
      char m = Number[i].unicode();
      if (m == '.')
      {
         return true;
      }
   }
   return false;
}

long long OtherToDecimal(QString number, int fromsystemode)
{
   long long decimalNumber = 0;
   char Digits[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};  
   int power = 0;  
   for(int i = number.length() - 1; i >= 0; i--) 
   {
      for (int j = 0; j < 36; j++)
      {
         if(number[i] == Digits[j])
         {
            decimalNumber += j * pow(fromsystemode, power);
         }
      }
      power++;
   }
   // printf("number %s from this systemode %d to 10 equal %d\n", number.toStdString().c_str(), fromsystemode, decimalNumber);
   return decimalNumber;  
}


QString DecimalToOther(long long number, int tosystemode)
{
   QString Answer, helper, helper_2;
   int i = 0;
   char Letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   while (number > 0) 
   {
      helper_2 = QString::number(number % tosystemode);
      if (helper_2.length() == 1)
      {
         helper += helper_2;
      }
      else
      {
         helper += Letters[helper_2.toInt() - 10];
      }
      number = number / tosystemode;
      i++;
   }
   for (int j = i - 1; j >= 0; j--)
   {
      Answer += helper[j];
   }
   // printf("number %d from 10 to this systemode: %d equal: %s\n", number_1, tosystemode, Answer.toStdString().c_str());
   return Answer;
}


QString Converter(QString number, int fromsystemode, int tosystemode)
{
   if (IfNumberIsDouble(number))
   {
      long long number_ = number.toDouble();
      number = QString::number(number_);      
   }
   return DecimalToOther(OtherToDecimal(number, fromsystemode), tosystemode);
}

long long Factorial(long long number)
{
   
   long long a = 1;
   for (int i = 1; i <= number; i++)
   {
      a = a * i;
   }
   return a;
}

// remover zeros at the end of the number
QString RemoveLastZeros(QString s1)
{
   QString Answer;
   bool firstnotzero = false;
   bool beforedot = true;
   for (int i = s1.length() - 1; i != -1; i--) 
   {
      if ((s1[i] != '0' && s1[i] != '.') || firstnotzero == true || beforedot != true)
      {
         firstnotzero = true;
         Answer = s1[i] + Answer;
      }
      if (s1[i] == '.')
      {
         beforedot = false;
      }
   }
   return Answer;
}

// if number to long
QString Proverka(double Answer1)
{
   printf("%f\n", Answer1);
   std::string Answer = std::to_string(Answer1), helper;
   for (int i = 0; i < Answer.length(); i++)
   {
      helper += Answer[i];
   }
   return RemoveLastZeros(QString::fromStdString(helper));
}

// 1 - plus; 2 - minus; 3 - multiply; 4 - divide; 5 - ^; 6 - mod; 7 - factorial, 8 - root;
QString Equal(QString firstNumber, QString secondNumber, int CurrentOperand, int CurrentNumberSystemMode)
{
   QString Answer;
   if (CurrentNumberSystemMode != 10)
   {
      firstNumber = QString::number(OtherToDecimal(firstNumber, CurrentNumberSystemMode));
      secondNumber = QString::number(OtherToDecimal(secondNumber, CurrentNumberSystemMode));
      //printf("we changed number system: firstNumber: %s and secondNumber: %s\n", firstNumber.toStdString().c_str(), secondNumber.toStdString().c_str());
   }
   switch (CurrentOperand)
   {
   case 1:
      Answer = Proverka(firstNumber.toDouble() + secondNumber.toDouble());
      break;
   case 2:
      Answer = Proverka(firstNumber.toDouble() - secondNumber.toDouble());
      break;
   case 3:
      Answer = Proverka(firstNumber.toDouble() * secondNumber.toDouble());
      break;
   case 4:
      Answer = Proverka(firstNumber.toDouble() / secondNumber.toDouble());
      break;
   case 5:
      Answer = Proverka(pow(firstNumber.toDouble(), secondNumber.toDouble()));
      break;
   case 6:
      Answer = Proverka(firstNumber.toInt() % secondNumber.toInt());
      break;
   case 7:
      Answer = QString::number(Factorial(firstNumber.toLong()));
      break;
   case 8:
      Answer = Proverka(pow(firstNumber.toDouble(), 0.5));
      break;
   }
   if (CurrentNumberSystemMode == 10)
   {
      return Answer;
   }
   else
   {
      return DecimalToOther(Answer.toLong(), CurrentNumberSystemMode);
   }
}

QString ChangeSignofCurrentNumber(int CurrentNumber, QString firstNumber, QString secondNumber)
{
   QString Answer;
   if (CurrentNumber == 1)
   {
      Answer = Proverka(firstNumber.toDouble() * -1);
   }
   else if (CurrentNumber == 2)
   {
      Answer = Proverka(secondNumber.toDouble() * -1);
   }
   return Answer;
}