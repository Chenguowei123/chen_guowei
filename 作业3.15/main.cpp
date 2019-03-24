#include <iostream>
#include"Date.h"
using namespace std;

int main()
{
    Data myData;
    int year,month,day;
    cout<<"Enter the year : ";
    cin>>year;
    myData.setYear(year);

    cout<<"Enter the month: ";
    cin>>month;
    if(month>12)
        month=1;
    if(month<1)
        month=1;
    myData.setMonth(month);

    cout<<"Enter the day  : ";
    cin>>day;
    myData.setDay(day);
    myData.displayMessage();
};
