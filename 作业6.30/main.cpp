#include <iostream>

using namespace std;

void backNumber();

int main()
{
    cout<<"Please enter one integer:\n";

    backNumber();
}

void backNumber()
{
    int number =0;
    int x =0;

    cin>>number;

    while(number>=1)
    {
        x=number%10;
        cout<<x;

        number=(number/10);
    }
}
