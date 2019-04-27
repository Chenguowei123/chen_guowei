#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    const size_t rows =3;
    const size_t columns =5;

    array <array <int ,columns> ,rows>sales;

    for(size_t row =0;row<sales.size();row++)
        for(size_t column =0;column<sales[row].size();++column)
            {
                sales[row][column]=0;
                cout<<"row "<<row<<"-"<<"column "<<column<<" : "<<sales[row][column]<<endl;
            }
}
