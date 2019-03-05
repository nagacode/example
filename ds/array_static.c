#include<stdio.h>
#include<stdlib.h>
int scan(int []);
int main()
{
	int a[10];

scan(a);

printf("The entered elements are: ");
for(int i=0;i<10;i++)
{
printf("%d ",a[i]);
}
}


int  scan(int a[])
{


for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

return a;


}


/*
array operations:

insertion
deletion
updation

*/
