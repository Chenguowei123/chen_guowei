#include <iostream>

using namespace std;

int main()
{
    int number =1;
    int accuracy ;
    int f =1;
    double e=1.0;

    cout<<"Enter desired accuracy of e:";
    cin>>accuracy;

    while(number<accuracy)
    {
        f*=number;
        e +=1.0/f;
        number++;
    }
    cout<<"e is"<<e<<endl;
}
