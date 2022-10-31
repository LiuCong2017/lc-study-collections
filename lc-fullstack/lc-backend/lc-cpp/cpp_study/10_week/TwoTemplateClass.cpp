template <class DATATYPE1,class DATATYPE2> 
class TwoTemplateClass
{
	public:
		DATATYPE1 _Data1;
		DATATYPE2 _Data2;
	
	public:
		TwoTemplateClass();
		TwoTemplateClass(DATATYPE1 data1,DATATYPE2 data2);
		TwoTemplateClass(TwoTemplateClass &n);
		~TwoTemplateClass();
		
		void SetData1(DATATYPE1 data){_Data1 = data;};
		DATATYPE1 GetData1(){return _Data1;};
		void SetData2(DATATYPE2 data){_Data2 = data;};
		DATATYPE2 GetData2(){return _Data2;};
		
		TwoTemplateClass & opeartor(TwoTemplateClass &n);
};

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2> & TwoTemplateClass<DATATYPE1,DATATYPE2>::opeartor(TwoTemplateClass<DATATYPE1,DATATYPE2> &n)
{
	TwoTemplateClass temp;
	temp._Data1 = _Data1 + n._Data1;
	temp._Data2 = _Data2 + n._Data2;
	
	return temp;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass()
{
	_Data1 = 0;
	_Data2 = 0;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass(DATATYPE1 data1,DATATYPE2 data2)
{
	_Data1 = data1;
	_Data2 = data2;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass(TwoTemplateClass<DATATYPE1,DATATYPE2> &n)
{
	_Data1 = n._Data1;
	_Data2 = n._Data2;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::~TwoTemplateClass()
{
}

int main()
{
	TwoTemplateClass<int,int> intt;
	TwoTemplateClass<float,int> flaott;
	TwoTemplateClass<double,char> doublet; 
	return 0;
}

