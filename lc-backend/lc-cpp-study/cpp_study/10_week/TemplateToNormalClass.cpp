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

class NormalClass : public TemplateClass<int>
{
	public:
		int _Data2;
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
    NormalClass a;
	return 0;
}

