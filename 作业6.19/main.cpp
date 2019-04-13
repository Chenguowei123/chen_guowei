#include <iostream>
#include<cmath>

using namespace std;

double hypotenuse(double a,double b)
{
    double c=sqrt(a*a+b*b);

    return c;
}

int main()
{
    double x=0.0;
    double y=0.0;


    cout<<"Please enter two numbers:";
    cin>>x>>y;

    cout<<hypotenuse(x,y);
}
