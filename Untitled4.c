#include<stdio.h>
int diff(int,int,int,int);
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int re=diff(a,b,c,d);
	printf("%d",re);
}
int diff (int a,int b,int c,int d)
{
	int x,y;
	x=a+b;
	y=c*d;
	return x-y;
}
