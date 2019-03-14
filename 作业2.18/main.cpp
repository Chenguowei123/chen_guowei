#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    cout<<"Enter two integers:";
    cin>>x>>y;

    if(x>y)
        cout<<x<<" is large."<<endl;

    if(y>x)
        cout<<y<<" is large."<<endl;

    if(y==x)
        cout<<"These numbers are equal.";
}
