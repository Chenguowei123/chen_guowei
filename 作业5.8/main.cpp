#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int smallest = 0;
    int x = 1;

    cout<<"How many numbers do you want to input?";
    cin>>number>>smallest;

    for(int count=1;count<number;count++)
        cin>>x;
        if(smallest>x)
        smallest=x;
    cout<<"The smallest is:"<<smallest<<endl;

}



