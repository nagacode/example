#include<stdio.h>
#include<stdlib.h>

extern int* scan_arr(int*, int);

int main()
{
int *a,n;
printf("Enter no.of arr elements: ");
scanf("%d",&n);
a = scan_arr(a,n);
printf("The entered elements are: ");		//printing the elements
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}


}
