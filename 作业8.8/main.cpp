#include <iostream>

using namespace std;

int main()
{
a)
unsigned int values[4]={2,4,6,8,10};
b)
int *vPtr;
unsigned int x;
vPtr=&x;
c)
for(size_t i=0;i<values.size();i++)
    cout<<"The "<<i<<"elements is "<<values[i]<<endl;
d)
vPtr=&values[0];
vPtr=1002500;
e)
for(size_t i =0;i<values.size();++i)
{
    vPtr=&values[i];
    cout<<*vptr;
}
f)
vPtr=&values;
for(size_t i=0;i<*vPtr.size();++i)
    cout<<*vptr[i];
g)
vptr=&values[];
for(size_t i=0;i<values.size();++i)
    cout<<i<<" - "<<*vptr[i];
h)
values[4];

vptr=&values;
*vptr[4];

vptr=&values[];
*vptr=4;

vPtr=&values[4];
i)
第四个地址，8
j)
初始地址，2

}
