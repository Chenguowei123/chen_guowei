#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int sum=0;
    int average=0;
    int product=0;

    cout<<"Input three different integers:";
    cin>>x>>y>>z;

    sum=x+y+z;
    cout<<"Sum is "<<sum<<endl;
    average=(x+y+z)/3;
    cout<<"Average is "<<average<<endl;
    product=x*y*z;
    cout<<"Product is "<<product<<endl;

    if(x>z&&y>z)
        cout<<"Smallest is "<<z<<endl;
    if(x>y&&z>y)
        cout<<"Smallest is "<<y<<endl;
    if(y>x&&z>x)
        cout<<"Smallest is "<<x<<endl;
    if(x>y&&x>z)
        cout<<"Largest is "<<x<<endl;
    if(y>z&&y>x)
        cout<<"Largest is "<<y<<endl;
    if(z>x&&z>y)
        cout<<"Largest is "<<z<<endl;

}
