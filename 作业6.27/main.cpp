#include <iostream>

using namespace std;

double minimum(double x,double y)
{
    if(x>=y)
        return y;
    else
        return x;
}

int main()
{
    double a,b,c,d;

    cout<<"Please enter three numbers:\n";
    cin>>a>>b>>c;

    d=minimum(minimum(a,b),c);
    cout<<"The minimum from three numbers is:"<<d;
}
