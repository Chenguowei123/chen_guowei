#include <iostream>

using namespace std;

inline integerPower(int base,int exponent)
{
    int i =1;
    int result =1;

    while(i<=exponent)
        {
            result*=base;
            i++;
        }
            return result;
}

int main()
{
    int a=0;
    int b=0;
    int c;

    cout<<"Please enter two numbers:";
    cin>>a>>b;

    cout<<"The integerPower("<<a<<","<<b<<") is: "<<integerPower(a,b);
}
