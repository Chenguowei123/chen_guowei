#include <iostream>

using namespace std;

int main()
{
    int a =0;
    int b =0;
    int c =0;

    cout<<"Please enter three nonzero integers:\n";
    cin>>a>>b>>c;

    int x =a*a;
    int y =b*b;
    int z =c*c;

    if((x+y)==z)
        cout<<"right";
    else if((x+z)==y)
        cout<<"right";
    else if((z+y)==z)
        cout<<"right";
    else
        cout<<"false";
}
