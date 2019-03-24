#include<iostream>
using namespace std;
class Data
{
 public:
    explicit Data();
    void setYear(int number1);
    int getYear() const;
    void setMonth(int number2);
    int getMonth() const;
    void setDay(int number3);
    int getDay() const;
    void displayMessage();
 private:
    int Year;
    int Month;
    int Day;
};
