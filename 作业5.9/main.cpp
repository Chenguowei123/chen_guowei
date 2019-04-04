#include <iostream>

using namespace std;

int main()
{
    int product=1;

    for(unsigned int count=1;count<=15;count++,count+=2)
        product*=count;

    cout<<"Product form 1 to 15 is:"<<product<<endl;
}
