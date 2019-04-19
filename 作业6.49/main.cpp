#include <iostream>

using namespace std;

inline double circleArea(double r)
{
    double pi=3.1;
    return pi*r*r;
}

int main()
{
    double rnumber;

    cout<<"Please enter R is:";
    cin>>rnumber;

    cout<<"The area of a circle of radius "<<rnumber<<" is: "<<circleArea(rnumber);
}

