#include<iostream>
#include"Date.h"

Data::Data()
    {
        Year=0;
        Month=0;
        Day=0;
    }
void Data::setYear(int number1)
    {
        Year=number1;
    }
int Data::getYear() const
    {
        return Year;
    }
void Data::setMonth(int number2)
    {
        Month=number2;
    }
int Data::getMonth() const
    {
        return Month;
    }
void Data::setDay(int number3)
    {
        Day=number3;
    }
int Data::getDay() const
    {
        return Day;
    }
void Data::displayMessage()
    {
        cout<<"Today is "<<getYear()<<"/"<<getMonth()<<"/"<<getDay();
    }
