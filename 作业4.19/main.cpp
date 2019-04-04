#include <iostream>

using namespace std;

int main()
{
    int counter =0;
    int number =0;
    int largest1 =0;
    int largest2 =0;

    cout<<"Please enter the first number:";
    cin>>largest1;

    cout<<"Please enter the next number:";
    cin>>number;

    if(number>largest1)
    {
        largest2=largest1;
        largest1=number;
    }
    else
        largest2=number;

    counter =2;

    while(counter<10)
    {
        cout<<"Please enter the next number:";
        cin>>number;

        if(number>largest1)
        {

            largest2=largest1;
            largest1=number;
        }

        else if(number>largest2)
        largest1=number;

        counter++;
    }
    cout<<"\nLargest1 is:"<<largest1<<"\nLargest2 is:"<<largest2;

}
