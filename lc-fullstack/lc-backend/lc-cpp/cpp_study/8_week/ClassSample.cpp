#include <string.h>
#include <iostream>
using namespace std;

class Date
{
protected:
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
	cout<<"析构函数调用"<<endl; 
	cout<<GetYear()<<endl; 
	cout<<GetMonth()<<endl; 
	cout<<GetDay()<<endl; 
}


class Person
{
	public:
		char *_Name;	
		Date _Birthday;   //_Birthday是Person的内置类 
		Date _Memoryday;   //_Memoryday是Person的内置类
	protected:
		char _Sex;
		
	public:
		Person();
		Person(char* name, Date &birthday, char sex);
		Person(char* name, int year, int month, int day, char sex);
		Person(Person &t);
		~Person();
		void SetName(char *name);
		char * GetName() const {return _Name;};
		void SetBirthday(Date birthday){_Birthday = birthday;};
		Date& GetBirthday() {return _Birthday;};
		void SetSex(char sex){_Sex = sex;};
		char GetSex(){return _Sex;};	
};

Person::Person()
{
	_Name =  new char[10];
	strcpy(_Name,"Nobody");
	
	_Sex = 'U';
}

Person::Person(char* name, Date &birthday, char sex):_Memoryday(birthday),_Birthday(birthday) 
{
	int len = strlen(name);
	_Name =  new char[len + 1];
	strcpy(_Name,name);	

	_Sex = sex;
} 

Person::Person(char* name, int year, int month, int day, char sex):_Birthday(year, month,day)
{
	int len = strlen(name);
	_Name =  new char[len + 1];
	strcpy(_Name,name);	

	_Sex = sex;
} 

Person::Person(Person &t):_Birthday(t._Birthday)
{
	int len = strlen(t._Name);
	_Name =  new char[len + 1];
	strcpy(_Name,t._Name);	

	_Sex = t._Sex;
}

Person::~Person()
{
	if(NULL != _Name)
	{
		delete _Name;
	}
}

void Person::SetName(char *name)
{
	int len = strlen(name);
	_Name =  new char[len + 1];
	strcpy(_Name,name);
}

int main()
{
	Person a;
	
	Date today(2021,12,11);
	Person b("张学友",today,50);
	
	Person c(b);
	a.SetName("wangwu");
 } 


