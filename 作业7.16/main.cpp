#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

int main()
{
   const size_t arraySize =13;
   array <int ,arraySize>p= { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 };
   array <int ,arraySize>t={};

   int x;
   int y;

   srand( time( 0 ) );

   for (unsigned int i = 1; i <= 36000; i++ )
   {
      x = 1 + rand() % 6;
      y = 1 + rand() % 6;
      t[ x + y ]++;
   }
   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;

   for ( int j = 2; j <p.size(); j++ )
      cout << setw( 10 ) << j << setw( 10 ) << t[ j ]
         << setprecision( 3 ) << setw( 9 )
         << 100.0 * p[ j ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * t[ j ] / 36000 << "%\n";
}
