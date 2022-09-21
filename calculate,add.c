#include<stdio.h>

int main()
{
	int add(int x, int n);
	int x,n;
	printf("enter values");
	scanf("%d%d",&x,&n);
	printf("sum=%d",add(x,n));
	return 0;
}
int add(int x,int n)
{
	return(x+n);
}
