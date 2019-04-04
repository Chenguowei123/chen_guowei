#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int largest = 0;
    int counter = 0;

    cout<<"Please input 10 numbers to compare the largest:\n";

    while(counter+=1,counter<=10)
            cin>>number;
        if(number>largest)
        largest=number;

    cout<<"The largest is :"<<largest;
}
