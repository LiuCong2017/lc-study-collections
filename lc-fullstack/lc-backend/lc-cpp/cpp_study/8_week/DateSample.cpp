#include <iostream>
#include <string.h>
using namespace std;

class Date
{
protected:
	int _year;
	int _month;
	int _day;
public: 
	char *msg;

public:
	Date();  //默认构造函数 
	Date(int year, int month, int day); 
	Date(Date &date);   //拷贝构造函数 
	~Date();
	
	int GetYear(){return _year;};   //内联函数 
	void SetYear(int year){_year = year;};
	
	int GetMonth(){return _month;};
	void SetMonth(int month){_month = month;};
	
	int GetDay(){return _day;};
	void SetDay(int day){_day = day;};
		
	int GetDayofThisMonth();
	int GetTotalDayofThisYear();
protected:
	int isLeapYear();
};

Date::Date()
{
	_year = 2000;
	_month = 2;
	_day = 20;
	
	msg = new char[100];
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	
	msg = new char[100];
}

Date::Date(Date &date)
{
	_year = date._year;
	_month = date._month;
	_day = date._day;
	
	msg = new char[100];
}

Date::~Date()
{
	delete msg;
	cout<<"析构函数调用"<<endl; 
	cout<<GetYear()<<endl; 
	cout<<GetMonth()<<endl; 
	cout<<GetDay()<<endl; 
}

int Date::isLeapYear()
{
	if((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
	{
		return 1;
	}
	
	return 0;
}

inline int Date::GetTotalDayofThisYear()
{
	if(1 == isLeapYear())
	{
		return 366;
	}
		
	return 365;
}

int Date::GetDayofThisMonth() 
{
	if(_month == 1 || _month == 3 || _month == 5 || _month == 7  || _month == 8 || _month == 10  || _month == 12)
	{
		return 31;
	}
	else if(_month == 4 || _month == 6 || _month == 9 || _month == 11)
	{
		return 30;
	}
	else
	{
		if(1 == isLeapYear())
		{
			return 29;
		}
		else
		{
			return 28;
		}		
	}
	
	return 0;	
}

int main()
{
	Date a;
	a.SetYear(1000);
	a.SetMonth(10);
	a.SetDay(10); 
	
	strcpy(a.msg,"Hello!");	
	
	Date b(2000,20,20);	
	Date c(b);
	c.SetYear(3000);
	c.SetMonth(30);
	c.SetDay(30); 
	
	cout<<"这个月有"<<a.GetDayofThisMonth()<<"天"<<endl;
	cout<<"今年有"<<a.GetTotalDayofThisYear()<<"天"<<endl;
}
