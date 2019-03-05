#include<stdio.h>
#include<stdlib.h>
int * scan_arr(int *,int);
int main()
{

int *a,n;
printf("Enter no.of arr elements: ");
scanf("%d",&n);
a = scan_arr(a,n);
printf("The entered elements are: ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 1;
}


int* scan_arr(int* a,int n)
{

a = (int *)malloc(n * sizeof(int));
printf("Enter the elements: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

return a;
}
