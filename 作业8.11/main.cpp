#include <iostream>

using namespace std;

int main()
{
a)
int *number;
cout<<*number<<endl;
b)
double *realPtr;
long *integerPtr;
integerPtr=&realPtr;
c)
int *x,y;
*x=&y;
d)
char string s[]="this is a character array";
for( ; *s !='0';++s)
    cout<<*s<<" ";
e)
short *number ,result;
void *genericPtr = &numPtr;
result = *genericPtr + 7;
f)
double x =19.34;
double *xPtr =&x;
cout<<xPtr<<endl;
}
