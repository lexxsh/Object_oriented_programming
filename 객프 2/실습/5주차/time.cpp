#include "time.h"

Time::Time(int, int, int)
{
	setTime(hour, minute, second);
}

void Time::setTime(int, int, int)
{
	setHour(hour);
	setMinute(minute);
	setSecond(second);
}

void Time::setHour(int h )
{
	hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m)
{
	minute = (m >= 0 && m < 60) ? m : 0;
}
 
void Time::setSecond(int s)
{
	second = (s >= 0 && s < 60) ? s : 0;
}

int Time::getHour() const
{
	return minute;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;
}

void Time::printfStandard()
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setw(2) << second << (hour < 12 ? " AM" : "PM");

}
