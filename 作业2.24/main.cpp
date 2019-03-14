#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;

    cout<<"Enter one integer:";
    cin>>x;

    y=x%2;
    if(y==0)
        cout<<x<<" is even number";
    if(y==1)
        cout<<x<<" is odd number";

    return 0;
}
