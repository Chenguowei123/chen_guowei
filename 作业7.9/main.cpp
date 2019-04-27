#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    a)array <array<int ,3>,2>t;

    b)rows =2;

    c)columns =3;

    d)6;

    e)t[1][0],t[1][1],t[1][2];

    f)t[2][0],t[2][1],t[2][2];

    g)for(size_t column=0;column<t.size(),++column)
          t{0}[column]=0;

    h)array<array<int ,3> ,2>t={};

    i)for(size_t row =0;row<t.size();row++)
        for(size_t column =0;column<t[row].size();column++)
            t[row][column]=0;

    j)for(auto const row :t)
        for(auto const column : row)
            column=0;

    k)array<array<int ,3> ,2>t={1,2,3,4,5,6};

    l)int x=0;
        sort(t.begin(),t.end())
        cout<<t[0];

    m)for(size_t column=0;column<t[row].size();++column)
         cout<<t[0][column];

    n)int total;
      for(size_t column=0;column<t[row].size();++column)
         total+=t[1][column];

    o) for(size_t row =0;row<t.size();row++)
          {
              {
                  int i=1;
                  cout<<"row"<<i;
                  i++;
              }
            for(size_t column =0;column<t[row].size();column++)
                {
                    int u=1;
                    cout<<setw(6)<<"column"<<u<<"\n"<<t[row][column];
                    u++;
                }
          }








}
