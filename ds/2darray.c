#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[2][2]= {1,2,3,4};
int b[2][2];
int i,j;

b[][] = pri(a);
printf("printing in main function\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%d ",b[i][j]);
	}
printf("\n");
}
}




void pri(int c[2][2])
{int i,j,a[2][2];
printf("printing in function\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%d ",c[i][j]);
	}
printf("\n");
}
return c;
}
