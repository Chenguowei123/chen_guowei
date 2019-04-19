#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int flip();

int main()
{
    int number1=0;
    int number2=0;

    for(unsigned int i=1;i<=100;i++)
    {
        if(flip()==1)
        {
            ++number1;
            cout<<setw(6)<<"Head";
        }
        else
        {
            ++number2;
            cout<<setw(6)<<"Tail";
        }
    }

    cout<<"\n The number of the head is:"<<number1;
    cout<<"\n The number of the tail us:"<<number2;
}

int flip()
{
    return rand()%2;
}

