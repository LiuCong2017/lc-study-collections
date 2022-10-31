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

