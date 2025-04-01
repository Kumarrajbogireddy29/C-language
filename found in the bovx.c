#include<stdio.h>
int main()
{
	int n,i,f=0; 
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
		  f=1;
		  break;
		}
	}
	if(f==1)
		{
			printf("element found\n");
		}
	else
	{
		printf("element not found\n");
	}
} 

	

