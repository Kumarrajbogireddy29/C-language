#include<stdio.h>
int main()
{
	int n;
	int *ptr=&n;
	scanf("%d",ptr);
	printf("%d",*ptr);
}
