#include <iostream>
using namespace std; 

template <class T>
void f(T *array,int len)
{
	T *temp = new T[len];    //int *p = new int[len]; 
	
	for(int i = 0;i < len; i++)
	{
		temp[len - 1- i] = array[i];
	}
	
	for(int i = 0;i< len; i++)
	{
		array[i] = temp[i];
		
		cout<<array[i]<<endl;
	}	
}

int main()
{
    int a[6]={1,2,3,4,5,6}, i;
    double b[3] = {1.2, 3.4, 5.6};
    f(a, 6); f(b, 3);
    return 0;
}

