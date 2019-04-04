#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int sum =0;
    cout<<"How many integers do you want to input? ";
    cin>>x;
    cout<<"Enter first integer:";
    cin>>y;

    sum = y;
    for(unsigned int count=1;count<=x;cin>>z,sum+=z,count++)
    cout<<sum<<" \n";
}
