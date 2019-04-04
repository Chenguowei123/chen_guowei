#include <iostream>

using namespace std;

int main()
{
    int x =0;
    int y =0;
    int sum =0;
    int average =0;
    cout <<"Enter integers:\n";
    cin>>x;

    sum=x;
    for(unsigned int count=1;y<9999;cin>>y,sum+=y,count++)
        average=sum/count;
    cout<<average<<" ";


}
