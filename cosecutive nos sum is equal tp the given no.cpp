#include<stdio.h>
int main()
{
	int n,i,x,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Given value:\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if((a[i]+a[i+1])==x)
		{
			c++;
		}
		i++;
	}
	if(c==0)
	{
		printf("Consective pairs sum is not equal to the given value");
	}
	else
	printf("%d",c);
}
