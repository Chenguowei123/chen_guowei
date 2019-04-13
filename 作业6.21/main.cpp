#include <iostream>

using namespace std;

int iseven(int x)
{
    while(1)
    {
        cin>>x;

        if(x%2==0)
            cout<<x<<" is true\n";
        else
            cout<<x<<" is false\n";
    }
}

int main()
{
    int x=0;
    cout<<"Please enter numbers:";

    iseven(x);

}
