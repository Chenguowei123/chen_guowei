#include <iostream>

using namespace std;

int mystery2 ( const char *);

int main()
{
    char string1[ 80 ];

    cout <<"Enter a string: ";
    cin>>string1;
    cout <<mystery2(string1)<<endl;

}
 int mystery2(const char *s)
 {
     unsigned int x;

     for(x =0; *s !='0';s++)
        ++x;

     return x;
 }
//创建一个可以返回整数类型的函数（该函数可以将参数的字节的个数传递给内置数组）
//创建具有80个空间的内置数组
//提示用户输入一段字节
//将输入的通过参数对构造的函数进行调用，实现对输入的所占空间的大小的计算并加上内置数组所占的空间的和
