#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double pi =0;
    long double d =1.0;
    long a =1000;

    cout<<fixed<<setprecision(8);

    for(long loop =1;loop<=a;loop++)
    {
        if (loop%2!=0)
            pi+=4.0;
        else
            pi-=4.0;

        cout<<loop<<"\t\t"<<pi<<'\n';

        d+=2.0;
    }
    cout<<endl;
}
