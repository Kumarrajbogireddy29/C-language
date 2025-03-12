#include<stdio.h>
void marks(int a,int b,int c)
{
	if(a>=90)
	return 1;
	else if(a>=80 && a<90)
	return 2;
	else if(a>70 && a<80)
	return 3;
}
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d",&a);
	printf("%d",a);
}
