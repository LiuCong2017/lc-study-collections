class Memo    //包含纯虚函数的类，抽象类。叫做虚基类 不能声明对象，但是可以声明父类指针 
{
	public:
		virtual void cry() = 0;    //纯虚函数 ，子类中必须重定义纯虚函数 
		void Show(); 
};

void Memo::Show()
{
	
}
 
class Tiger : public Memo
{
	public:
		void cry();
		void haha();
};

void Tiger::cry()
{
	
}

void Tiger::haha()
{
	
}

class Lion : public Memo
{
	public:
		void cry();
};

void Lion::cry()
{
	
}

int main()
{
	Memo *pm;
	Tiger t, *pt;
	Lion l, *pl;
	
	pt = &t;
	pl = &l;
	
	pt->cry();
	pl->cry();
	
	pm = pt;
	pm->cry();
	
	pm = pl;
	pm->cry();	
}
