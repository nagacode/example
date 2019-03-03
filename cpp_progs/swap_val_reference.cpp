#include<iostream> 
using namespace std; 
  
void swap (int& first, int& second) 
{ 
    int temp = first; 
    first = second; 
    second = temp; 
} 
  
int main() 
{ 
    int a, b ;
    cout <<"Enter a:"<<endl;
cin>>a;
cout <<"Enter b:"<<endl;
cin>>b;
cout<<"before swapping a="<<a<<" b="<<b<<endl;

    swap( a, b ); 
  cout<<"after swapping a="<<a<<" b="<<b<<endl;  
    return 0; 
} 
