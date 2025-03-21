#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr=&a;
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	int max=0;
	for(i=0;i<n;i++)
	{
	    if (*(ptr+i)>max)
	    {
	    	max=*(ptr+i);
		}
	}
		printf("%d",max);
}
	


