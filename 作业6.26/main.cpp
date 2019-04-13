#include <iostream>

using namespace std;

double celsius(double x)
{
    for(int i=32;i<=212;i++)
    {
        double x=(i-32)/1.8;
        cout<<i<<"-"<<x<<"\n";
    }
}

double fahrenheit(double y)
{
    for(int i=0;i<=100;i++)
    {
        double y=i*1.8+32;
        cout<<i<<"--"<<y<<"\n";
    }
}
int main()
{
    double x;
    double y;

    cout<<"Blow is the conversion from 32 to 212 degrees Fahrenheit to Celsius:\n";
    celsius(x);
    cout<<"Blow is the conversion from 0 to 100 degrees Celsius to Fahrenheit:\n";
    fahrenheit(y);
}

