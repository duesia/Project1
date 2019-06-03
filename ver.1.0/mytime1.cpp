#include<iostream>
#include "mytime.h"
Time::Time()
{
	hours=minutes=0;
}

Time::Time(int h,int m=0)
{
	hours=h;
	minutes=m;
}

void Time::addMin(int m)
{
	minutes+=m;
	hours+=minutes/60;
	minutes%=60;
}

void Time::addHr(int h)
{
	hours+=h;
}

void Time::Reset(int h=0,int m=0)
{
	hours=h;
	minutes=m;
}

Time Time::sum(const Time & t)const
{
	Time sum;
	sum.minutes=minutes+t.minutes;
	sum.hours=hours+t.hours+sum.minutes/60;
	sum.minutes%=60;

	return sum;
}

void Time::Show() const
{
	std::cout<<hours<<" hours,"<<minutes<<" minutes.";
}