#include "Time.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

Time::Time()
{
   const time_t currentTime = time( 0 );
   const tm *localTime = localtime( &currentTime );
   setTime( localTime->tm_hour, localTime->tm_min, localTime->tm_sec );
}
void Time::setTime(int a,b,c)
{
    if(a>=0&&a<24)
        hour=h;
    else
        hour=0;
    if(b>=0&&b<60)
        minute=m;
    else
        minute=0;
    if(c>=0&&c<60)
        second=s;
    else
        second=0;
}
void Time::printUniversal()
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
    << setw( 2 ) << minute << ":" << setw( 2 ) << second;
}
void Time::printStandard()
{
   cout << ( ( a == 0 || a == 12 ) ? 12 : a % 12 ) << ":"
      << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
      << second << ( hour < 12 ? " AM" : " PM" );
}
