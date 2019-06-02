#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


Time::Time(int hour ,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::Hour(int h)
{
    int h=s/3600;
    if(h>=0&&h<24)
       {
           hour=h;
           return hour
       }
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::Minute(int m)
{
    int m=(s-(h*3600))/60;
    if(m>=0&&m<60)
    {
        minute=m;
        return minute
    }
    else
        throw invalid_argument("minute must be 0-59")
}

void Time::Second(int s)
{
    int second=(s-h*3600-m*60);
    return second
}

void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<Hour(h)<<";"<<setw(2)<<Minute(m)<<";"<<setw(2)<<Second(s)
}
void Time::printStandard() const
{
    cout<<((Hour(h) == 0||Hour(h)==12)? 12;Hour(h)%12)<<":"<<setfill('0')<<setw(2)<<Minute(m)<<";"<<setw(2)<<Second(s)<<(hour<12?"AM":"PM");
}
