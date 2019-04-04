#inclede <iostream>

using namespace std;

int main()
{
    int number;
    int f=1;

    cout<<"Enter a positive Integer:";
    cin>>number;

    cout<<number<<"! is ";

    while(number>0)
    {
        f*=number;
        number--;
    }

    cout<<f<<endl;
}

