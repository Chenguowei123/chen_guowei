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
//����һ�����Է����������͵ĺ������ú������Խ��������ֽڵĸ������ݸ��������飩
//��������80���ռ����������
//��ʾ�û�����һ���ֽ�
//�������ͨ�������Թ���ĺ������е��ã�ʵ�ֶ��������ռ�ռ�Ĵ�С�ļ��㲢��������������ռ�Ŀռ�ĺ�
