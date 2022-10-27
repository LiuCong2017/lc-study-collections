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

template <class DATATYPE>
class TwoSameTemplateClass : public TemplateClass<DATATYPE>
{
	public:
		DATATYPE _Data2;
		
	public:
		TwoSameTemplateClass();
		TwoSameTemplateClass(DATATYPE data1,DATATYPE data2);
		TwoSameTemplateClass(TwoSameTemplateClass &n);
		~TwoSameTemplateClass();
		
		void SetData2(DATATYPE data){_Data2 = data;};
		DATATYPE GetData2(){return _Data2;};
		
		TwoSameTemplateClass & opeartor(TwoSameTemplateClass &n);
};


template <class DATATYPE>
TwoSameTemplateClass<DATATYPE> & TwoSameTemplateClass<DATATYPE>::opeartor(TwoSameTemplateClass<DATATYPE> &n)
{
	TwoSameTemplateClass<DATATYPE> temp;
	temp._Data = _Data2 + n._Data;
	temp._Data2 = _Data2 + n._Data2;
	
	return temp;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass()
{
	_Data2 = 0;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass(DATATYPE data1,DATATYPE data2):TemplateClass<DATATYPE>(data1)
{
	_Data2 = data2;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass(TwoSameTemplateClass<DATATYPE> &n):TemplateClass<DATATYPE>(n)
{
	_Data2 = n._Data2;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::~TwoSameTemplateClass()
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

