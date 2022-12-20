#include<stdio.h>
void add();
main()
{
	add();
}
void add()
{
	int a,b,c;
	printf("ENter 2 numbers..");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("add=%d",c);
}