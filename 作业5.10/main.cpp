#include <iostream>

using namespace std;

int main()
{
    int f =1;
    cout<<"x\tx!\n";

    for(int i=1;i<=5;i++)
    {
        f*=i;
        cout<<i<<'\t'<<f<<'\n';
    }

    cout<<endl;
}
