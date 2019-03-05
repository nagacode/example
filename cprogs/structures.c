#include<stdio.h>
#include<stdlib.h>
struct thogaru
{
int a;
char c;
};


int main()
{
struct thogaru *naga;
naga = (struct thogaru*)malloc(sizeof(struct thogaru));

naga->a=10;

printf("a =%d\n",naga->a);

return 0;
}



