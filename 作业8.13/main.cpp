#include <iostream>

using namespace std;

void mystery1( char*,const char*);

int main()
{
    char string1[80];
    char string2[80];//shu zu

    cout << "Enter two strings: ";
    cin >>string1>>string2;
    mystery1(string1,string2);
    cout <<string1<<endl;

}

void mystery1(char *s1 ,const char *s2)
{
    while(*s1 !='0')
        ++s1;

    for(;(*s1=*s2);++s1,++s2)//
        ;
}


//创建一个函数（该函数可以让数组再加上输入的string1 中的字节所占的空间，之后将string2 通过指针传递给string1 中）；
//创建两个具有80个字节空间的内置数组 string1 和string2；
//提示用户输入两段连续的字节；
//函数的调用；
//输出string1；

