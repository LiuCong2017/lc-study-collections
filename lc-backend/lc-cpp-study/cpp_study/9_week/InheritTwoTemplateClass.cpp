template <class DATATYPE> 
class TemplateClass
{
	public:
		DATATYPE _Data;
	
	public:
		TemplateClass();
		TemplateClass(DATATYPE data);
		TemplateClass(TemplateClass &n);
		~TemplateClass();
		
		void SetData(DATATYPE data){_Data = data;};
		DATATYPE GetData(){return _Data;};
		
		TemplateClass & opeartor(TemplateClass &n);
};

template <class DATATYPE1,class DATATYPE2> 
class TwoTemplateClass : TemplateClass<DATATYPE1>
{
	public:
		DATATYPE2 _Data2;
	
	public:
		TwoTemplateClass();
		TwoTemplateClass(DATATYPE1 data1,DATATYPE2 data2);
		TwoTemplateClass(TwoTemplateClass &n);
		~TwoTemplateClass();
		
		void SetData2(DATATYPE2 data){_Data2 = data;};
		DATATYPE2 GetData2(){return _Data2;};
		
		TwoTemplateClass & opeartor(TwoTemplateClass &n);
};


template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2> & TwoTemplateClass<DATATYPE1,DATATYPE2>::opeartor(TwoTemplateClass<DATATYPE1,DATATYPE2> &n)
{
	TwoTemplateClass temp;
	temp._Data1 = _Data2 + n._Data1;
	temp._Data2 = _Data2 + n._Data2;
	
	return temp;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass()
{
	_Data2 = 0;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass(DATATYPE1 data1,DATATYPE2 data2):TemplateClass<DATATYPE1>(data1)
{
	_Data2 = data2;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::TwoTemplateClass(TwoTemplateClass<DATATYPE1,DATATYPE2> &n):TemplateClass<DATATYPE1>(n)
{
	_Data2 = n._Data2;
}

template <class DATATYPE1,class DATATYPE2> 
TwoTemplateClass<DATATYPE1,DATATYPE2>::~TwoTemplateClass()
{
}



template <class DATATYPE>
TemplateClass<DATATYPE> & TemplateClass<DATATYPE>::opeartor(TemplateClass<DATATYPE> &n)
{
	TemplateClass temp;
	temp._Data = _Data + n._Data;
	
	return temp;
}

template <class DATATYPE>
TemplateClass<DATATYPE>::TemplateClass()
{
	_Data = 0;
}

template <class DATATYPE>
TemplateClass<DATATYPE>::TemplateClass(DATATYPE data)
{
	_Data = data;
}

template <class DATATYPE>
TemplateClass<DATATYPE>::TemplateClass(TemplateClass<DATATYPE> &n)
{
	_Data = n._Data;
}

template <class DATATYPE>
TemplateClass<DATATYPE>::~TemplateClass()
{
}

int main()
{
//	TemplateClass a;   错误的，未给数据类型 
	
	TemplateClass<int> intt;
	TemplateClass<float> flaott;
	TemplateClass<double> doublet; 
	return 0;
}

