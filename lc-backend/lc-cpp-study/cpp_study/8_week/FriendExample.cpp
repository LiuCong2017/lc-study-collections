class Date;

class Senondclass
{
	public:
		int GetDateYear(Date &d);
}; 

class Thirdclass
{
	public:
		int GetDateYear(Date &d);
		int GetDateMonth(Date &d);
		int GetDateDay(Date &d);
};


class Date
{
	private:
		int _year;
		int _month;
		int _day;
	public:
		Date();
		Date(int year, int month, int day);
		Date(Date &d);
		~Date();
		
		Date & operator + (Date &d);
		
		friend Date & operator - (Date &a, Date &b);
		friend int Senondclass::GetDateYear(Date &d); 
	//	friend int Thirdclass::GetDateYear(Date &d);
	//	friend int Thirdclass::GetDateMonth(Date &d);
	//	friend int Thirdclass::GetDateDay(Date &d);
	
		friend Thirdclass;
};

int Thirdclass::GetDateYear(Date &d)
{
	return d._year;
}

int Thirdclass::GetDateMonth(Date &d)
{
	return d._month;
}

int Thirdclass::GetDateDay(Date &d)
{
	return d._day;
}

int Senondclass::GetDateYear(Date &d)
{
	return d._year; 
}

Date & operator - (Date &a, Date &b)
{
	int year = a._year - b._year;
	int month = a._month - b._month;
	int day = a._day - b._day;
	
	Date temp(year,month,day);
	
    return temp;	
}

Date & Date::operator + (Date &d)
{
	int year = _year + d._year;
	int month = _month + d._month;
	int day = _day + d._day;
	
	Date temp(year,month,day);
	
    return temp;
} 

Date::Date()
{
	_year = 2021;
	_month = 12;
	_day = 25;
} 

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

Date::Date(Date &d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;	
}

Date::~Date()
{
}

int main()
{
	Date a(1000,10,10);
	Date b(2000,20,20);
	Date c;
	
	c = a - b; 
}
