#include <iostream>
#include <iomanip>

using namespace std;

void calendar (int, int);
int startday (int, int);
bool isLeapYear(int);

int main()
{
	int month, year;

	cout<<"Please enter the year and the month in the following format: yyyy mm"<<endl;
	cin>>year>>month;

	while (month>12)
	{
		cout<<"Not a valid month."<<endl;
		cout<<"Please enter the year and the month in the following format: yyyy mm"<<endl;
		cin>>year>>month;
	}

	cout<<endl<<"SUN MON TUE WED THU FRI SAT"<<endl;
	calendar (month, year);
	cout<<endl<<endl;

	system("PAUSE");
	return 0;
}

void calendar (int m, int y)
{
	int numdays;

	switch (m)
	{
	case  1: case  3: case  5: case  7: case  8: case 10: case 12: numdays = 31;
		break;
	case  4: case  6: case  9: case 11: numdays = 30;
		break;
	case  2:	if (isLeapYear(y)==true)
					numdays = 29;
				else
					numdays = 28;
		break;
	}

	int c=0, w=0;

	for (int s=0; s<startday (m, y); s++)
		cout<<"    ";
	for (int d=1; d<=numdays; d++)
	{
		cout<<setw(3)<<d<<" ";
		c++;
		if (c == 7-startday (m, y) && w<1)
		{
			cout<<endl;
			c=0;
			w++;
		}
		else if (c == 7)
		{
			cout<<endl;
			c=0;
			w++;
		}
	}
}

int startday (int m, int y)
{
	int days=1;
	int sday;

	for (int i=1; i<y; i++)
	{
		if (isLeapYear(i)==true)
			days=days+366;
		else
			days=days+365;
	}
	
	switch (m)
	{
	case  1: break;
	case  2: days=days+31;
		break;
	case  3:	if (isLeapYear(y)==true)
					days=days+31+29;
				else days=days+31+28;
		break;
	case  4: 	if (isLeapYear(y)==true)
					days=days+31+29+31;
				else days=days+31+28+31;
		break;
	case  5:	if (isLeapYear(y)==true)
					days=days+31+29+31+30;
				else days=days+31+28+31+30;
		break;
	case  6:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31;
				else days=days+31+28+31+30+31;
		break;
	case  7:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30;
				else days=days+31+28+31+30+31+30;
		break;
	case  8:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30+31;
				else days=days+31+28+31+30+31+30+31;
		break;
	case  9:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30+31+31;
				else days=days+31+28+31+30+31+30+31+31;
		break;
	case 10:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30+31+31+30;
				else days=days+31+28+31+30+31+30+31+31+30;
		break;
	case 11:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30+31+31+30+31;
				else days=days+31+28+31+30+31+30+31+31+30+31;
		break;
	case 12:	if (isLeapYear(y)==true)
					days=days+31+29+31+30+31+30+31+31+30+31+30;
				else days=days+31+28+31+30+31+30+31+31+30+31+30;
		break;
	}

	sday = (days) % 7;
	return sday;
}
		
bool isLeapYear(int year)
{
	if (year % 400 == 0)
	return true;
	
	if (year % 100 == 0)
	return false;

	if (year % 4 == 0)
	return true;
	
	else
	return false;
}