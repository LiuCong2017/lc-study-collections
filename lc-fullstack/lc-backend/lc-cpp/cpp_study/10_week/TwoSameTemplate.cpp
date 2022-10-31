template <class DATATYPE> 
class TwoSameTemplateClass
{
	public:
		DATATYPE _Data1;
		DATATYPE _Data2;
	
	public:
		TwoSameTemplateClass();
		TwoSameTemplateClass(DATATYPE data1,DATATYPE data2);
		TwoSameTemplateClass(TwoSameTemplateClass &n);
		~TwoSameTemplateClass();
		
		void SetData1(DATATYPE data){_Data1 = data;};
		DATATYPE GetData1(){return _Data1;};
		void SetData2(DATATYPE data){_Data2 = data;};
		DATATYPE GetData2(){return _Data2;};
		
		TwoSameTemplateClass & opeartor(TwoSameTemplateClass &n);
};

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE> & TwoSameTemplateClass<DATATYPE>::opeartor(TwoSameTemplateClass<DATATYPE> &n)
{
	TwoSameTemplateClass temp;
	temp._Data1 = _Data1 + n._Data1;
	temp._Data2 = _Data2 + n._Data2;
	
	return temp;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass()
{
	_Data1 = 0;
	_Data2 = 0;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass(DATATYPE data1,DATATYPE data2)
{
	_Data1 = data1;
	_Data2 = data2;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::TwoSameTemplateClass(TwoSameTemplateClass<DATATYPE> &n)
{
	_Data1 = n._Data1;
	_Data2 = n._Data2;
}

template <class DATATYPE>
TwoSameTemplateClass<DATATYPE>::~TwoSameTemplateClass()
{
}

int main()
{
	TwoSameTemplateClass<int> intt;
	TwoSameTemplateClass<float> flaott;
	TwoSameTemplateClass<double> doublet; 
	return 0;
}

