#include <iostream>

using namespace std;

int main()
{
    double a =0;
    double b =0;
    double c =0;

    cout<<"Please enter three numbers:\n";
    cin>>a>>b>>c;

    if(a+b>c&&a+c>b&&c+b>a)
        cout<<"right";
    else
        cout<<"false";

}
