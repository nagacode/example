#include<iostream>
using namespace std;
int main()
{
	int a = 10, *b;
   b= &a;
cout<<"a="<<a<<endl;
cout<<"&a="<<&a<<endl;
cout<<"b="<<b<<endl;
cout<<"&b="<<&b<<endl;
cout<<"*b="<<*b<<endl;
cout<<"&*b="<<&*b<<endl;
cout<<endl;

int **c;  //double pointer
c= &b;
cout<<"&c="<<&c<<endl;
cout<<"c="<<c<<endl;
cout<<"*c="<<*c<<endl;
cout<<"**c="<<**c<<endl;

cout<<endl;
int ***d; //triple pointer
d =&c;
cout<<"&d="<<&d<<endl;
cout<<"d="<<d<<endl;
cout<<"*d="<<*d<<endl;
cout<<"**d="<<**d<<endl;
cout<<"***d="<<***d<<endl;
}
