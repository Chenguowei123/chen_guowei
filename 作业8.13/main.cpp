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


//����һ���������ú��������������ټ��������string1 �е��ֽ���ռ�Ŀռ䣬֮��string2 ͨ��ָ�봫�ݸ�string1 �У���
//������������80���ֽڿռ���������� string1 ��string2��
//��ʾ�û����������������ֽڣ�
//�����ĵ��ã�
//���string1��

