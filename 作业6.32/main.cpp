#include <iostream>

using namespace std;

double qualityPoints(double);

int main()
{
    int p;

    cout<<"Please enter the quality points of one student:\n";
    cin>>p;

    qualityPoints(p);

    cout<<qualityPoints(p)<<endl;
}

double qualityPoints(double p)
{
    if(p>=90&&p<=100)
        return 4;
    else if(p>=80&&p<=89)
        return 3;
    else if(p>=70&&p<=79)
        return 2;
    else if(p>=60&&p<=69)
        return 1;
    else if(p<60)
        return 0;
}
