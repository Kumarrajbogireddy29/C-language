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
	printf("Enter required ele:\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c++;
			break;
		}
	}
	if(c==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
}
