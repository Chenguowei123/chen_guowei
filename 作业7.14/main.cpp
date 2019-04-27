#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector <int>number(20);

   int y=0;
   int x=0;
   int z=0;

   cout << "Please enter 20 numbers between 10 and 100:\n";

   for (size_t i =0;i<number.size();i++)
   {
      cin >>x;
      if ( x>= 10 && x <= 100 )
      {
         for ( int j = 0; j<y; j++ )
         {
            if ( x == number[ j ] )
            {
              z = 1;
               break;
            }
         }
         if (z!=1)
         {
            number[y++] = x;
            ++i;
         }
      }
   }

   for (size_t i= 0; i <number.size(); i++)
      cout << number[ i ] << ' ';
}
