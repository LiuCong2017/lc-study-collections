class Memo
{
	public:
		virtual void cry();
};

void Memo::cry()
{
	
}

class Tiger : public Memo
{
	public:
		void cry();
};

void Tiger::cry()
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
	Memo m, *pm;
	Tiger t, *pt;
	Lion l, *pl;
	
	pm = &m;
	pt = &t;
	pl = &l;
	
	pm->cry();
	pt->cry();
	pl->cry();
	
	pm = pt;
	pm->cry();
	
	pm = pl;
	pm->cry();
	
	m.cry();
	t.cry();
	l.cry();
	
	m = t;
	m.cry();
	
	m = l;
	m.cry(); 
	
}
