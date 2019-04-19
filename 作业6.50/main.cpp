#include <iostream>

using namespace std;

int tripleByValue(int);
int tripleByReference(int &);

int main()
{
    int count;

    cout<<"PLease enter one integer:\n";
    cin>>count;

    cout<<"The tripleByValue about count is : "<<tripleByValue(count)<<"\n";
    cout<<"The tripleByReference about count is : "<<tripleByReference(count);

}

int tripleByValue(int count)
{
    return count*=3;
}

int tripleByReference(int &countNumber)
{
    return countNumber*=3;
}
