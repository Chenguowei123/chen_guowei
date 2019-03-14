#include <iostream>


 using namespace std;

int main()

{
    int number1=0;
    int number2=0;
    int sum=0;
    int x=0;
    int y=0;
    int z=0;

    std::cout<<"Enter two integers:";
    std::cin>>number1>>number2;


    sum=number1+number2;
    x=number1*number2;
    y=number1-number2;
    z=number1/number2;

    std::cout<<"The sum is "<<sum<<std::endl;
    std::cout<<"The product is "<<x<<std::endl;
    std::cout<<"The difference is "<<y<<std::endl;
    std::cout<<"The quotient is "<<z<<std::endl;


    return 0;



}
