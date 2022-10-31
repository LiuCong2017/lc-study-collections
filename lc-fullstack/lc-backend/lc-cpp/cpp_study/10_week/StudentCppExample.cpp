#include <string.h>

class Student
{
	public:
		char *_Name;
		char _Sex;
		float _Score;
		
	public:
		Student();
		Student(char *name,char sex,float score);
		Student(Student &stu);
		~Student();		
};

Student::Student()
{
	_Name = new char[20];
	strcpy(_Name,"zhangsan");
	
	_Sex = 'M';
	_Score = 90;
}

Student::Student(char *name,char sex,float score)
{
	int len = strlen(name);
	_Name = new char[len + 1];
	strcpy(_Name,name);
	
	_Sex = sex;
	_Score = score; 
}

Student::Student(Student &stu)
{
	int len = strlen(stu._Name);
	_Name = new char[len + 1];
	strcpy(_Name,stu._Name);
	
	_Sex = stu._Sex;
	_Score = stu._Score; 
}

Student::~Student()
{
	delete _Name;
}

int main()
{
	Student a;
	Student b("Lisi",'F',100);
	Student c(b);
	
	Student *p = new Student("wangwu",'m',96);
	
	delete p; 
	
	p = new Student(b);
	p->_Score = 10000;
	delete p;
}

