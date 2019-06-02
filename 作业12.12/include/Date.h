#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>
#include <string>

using namespace std;

class Date
{
    friend ostream &operator<<(ostream &,const Date &)
    public:
        Date(int m =1 ,int d =1,int y =1900);
        void setDate(int ,int ,int );
        Date &operator++();
        Date operator++(int);
        Date &operator+=(unsigned int);
        static bool leapYear(int);
        bool endOfMonth(int) const;

    private:
        unsigned int month;
        unsigned int day;
        unsigned int yeat;

        static const array<unsigned int ,13>days;
        void heipIncrement();
};

#endif // DATE_H
