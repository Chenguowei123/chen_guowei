#include <iostream>

using namespace std;


int multiple(int x,int y)
{
        if(0==(x%y))
        return 1;
    else
        return 0;
}
int main()
{
    int x =0;
    int y =0;

    cout<<"Please enter two numbers:";
    cin>>x>>y;

    if (multiple(x,y)==1)
        cout<<"true";
    else
        cout<<"false";


}
