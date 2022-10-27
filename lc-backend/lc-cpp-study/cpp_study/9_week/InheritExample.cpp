#include <iostream>
using namespace std;

class Date
{
public:
	int _year;
	int _month;
	int _day;

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
};

Date::Date()
{
	_year = 2000;
	_month = 2;
	_day = 20;
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(Date &date)
{
	_year = date._year;
	_month = date._month;
	_day = date._day;
}

Date::~Date()
{
	cout<<"Date析构函数调用"<<endl; 
	cout<<GetYear()<<endl; 
	cout<<GetMonth()<<endl; 
	cout<<GetDay()<<endl; 
}

class Birthday : public Date
{
	public:
		int _Num;
	
	public:
		Birthday();
		Birthday(int num);
		Birthday(int year,int month, int day,int num);
		Birthday(Birthday &b);
		~Birthday(); 
		int GetNum(){return _Num;};
		void SetNum(int num){_Num = num;};
};

Birthday::Birthday()
{ 
	_Num = 0;
}

Birthday::Birthday(int num)
{ 
	_Num = num;
}

Birthday::Birthday(int year,int month, int day,int num):Date(year,month,day)
{
	_Num = num;
}
 
Birthday::Birthday(Birthday &b):Date(b)
{
	_Num = b._Num;
}

Birthday::~Birthday()
{
	cout<<"Birthday析构函数调用"<<endl; 
	cout<<GetYear()<<endl; 
	cout<<GetMonth()<<endl; 
	cout<<GetDay()<<endl; 
}

int main()
{
	Birthday b;
	Birthday c(10);
	Birthday d(2021,12,11,20);	
	Birthday e(d);
}

