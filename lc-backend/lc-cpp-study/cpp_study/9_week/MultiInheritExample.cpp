class Memo 
{
	public:
		int m;
};

class Tiger : virtual public Memo  //ĞéÄâ¼Ì³Ğ 
{
	public:
		int t;
};

class Lion : virtual public Memo //ĞéÄâ¼Ì³Ğ 
{
	public:
		int l;
};

class LionTiger : public Tiger, public Lion
{
	public:
		int tl;
};

int main()
{
	Memo memo;
	memo.m = 10;
	
	Tiger tiger;
	tiger.m = 20;
	tiger.t = 20;
	
	Lion lion;
	lion.m = 30;
	lion.l = 30;
	
	LionTiger liontiger;
	liontiger.tl = 40;
	liontiger.t = 40;
	liontiger.l = 40;
	//liontiger.Lion::m = 40;
	liontiger.m = 40; 
	
}
