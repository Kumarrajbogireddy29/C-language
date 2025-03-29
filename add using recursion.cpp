#include<stdio.h>
int add (int n)
{
	if (n==0) return 0;
	return n%10 + add(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=add(n);
	printf("%d",res);
}
