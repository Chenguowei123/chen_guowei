#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    array <string ,6>alphabet;
    cout<<alphabet[6];


    int x;
    array <double ,4>grades;
    cin>>x;
    grades[4]=x;


    array <int ,5>values={8,8,8,8,8};


    int total=0;
    array <double ,100>temperatures;
    for(size_t i=0;i<temperatures.size();++i)
        total+=temperatures[i];


    array <double ,11>a;
    array <double ,45>b;
    for(size_t i=0;i<=[b.size()-a.size()];++i)
        b[i+11]=b[i]
    for(size_t i=0;i<=a.size();++i)
        b[i]=a[i];



    double maximum=0;
    double minimum=0;
    array <double ,99>w;
    for(size_t i=0;i<w.size();++i)
    {
        if(maximum>w[i])
            maximum=maximum;
        else
            maximum=w[i];
        if(minimum<w[i])
            minimum=minimum;
        else
            minimum=w[i];
    }

}
