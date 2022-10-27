//
// Created by kavin on 2022/2/8.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int oneInt1, oneInt2;
    char strArray[20];
    string str;
    double oneDouble;
    char oneChar = 'a';
    cout<<"input 2 int, 1 char and 1 float,";
    cout<<"separate with space, tab or Enter:"<<endl;
    cin>>oneInt1>>oneInt2>>oneChar>>strArray>>oneDouble;
    str=strArray;
    cout<<"The value input is:"<<endl;
    cout<<"string is: \t\t"<<str<<endl
        <<"two int is: \t"<<oneInt1<<" and\t"<<oneInt2<<endl
        <<"char is: \t\t"<<oneChar<<"\n"
        <<"float is: \t\t"<<oneDouble<<endl;

    return 0;
}