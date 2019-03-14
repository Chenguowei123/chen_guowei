#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int R=0;
    int C=0;
    int S=0;

    std::cout<<"Enter one number:";
    std::cin>>number1;

    R=2*number1;
    C=2*number1*3.14159;
    S=number1*number1*3.14159;

    std::cout<<"R is"<<R<<std::endl;
    std::cout<<"C is"<<C<<std::endl;
    std::cout<<"S is"<<S<<std::endl;

    return 0;
}
