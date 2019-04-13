#include <iostream>

using namespace std;

int prime(int x)
{
    if(x==1)
        cout<<"1 is not the prime number.";
    else if (x==2)
        cout<<"2 is the prime number.";
    else if(x>2)
    {
        for(int i=2;i<x/2;i++)
            {
                if(x%i==0)
                    {
                        cout<<x<<" is the sum number."<<endl;
                        return 1;
                    }
            }
        cout<<x<<" is the prime number.";

    }
}

int main()
{
    int x =0;

    cout<<"Please enter  one integer:\n";
    cin>>x;

    prime(x);
}
