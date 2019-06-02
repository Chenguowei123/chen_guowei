#include "HourlyWorker.h"

void HourlyWorker::setWage(int w)
{
    wage=w;
}

void HourlyWorker::setHours(int h)
{
    hours=h;
}

void HourlyWorker::getHours() const
{
    return hours;
}

void HourlyWorker::getWage() const
{
    return wage;
}

double HourlyWorker::Earnings() const
{
    if(hour<=40)
        return getWage()*getHours();
    else
        return getWage()*getHours()+(hour-40)*1.5*getWage();
}
