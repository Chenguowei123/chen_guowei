#include <iostream>
#include <iomanip>
using namespace std;

bool prime( int x);

int main()
{
   int count = 1;

   cout << "The prime numbers from 1 to 10000 are:\n" << endl;
   cout <<" 2  ";

   for ( int i =3;i<10000;i++)
   {
      if ( prime(i) )
      {
         count++;
         cout <<i<<"  ";
      }
   }

   cout << endl << "Total of " << count
      << " prime numbers between 1 and 10000." << endl;
}

bool prime(int n)
{

   for (int x =2;x<=n/2;x++)
   {

      if (n%x==0)
         return false;
   }

   return true;
}
