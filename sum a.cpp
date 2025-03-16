#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int A[n],B[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
    for(i=0;i<n;i++)
    {
    	scanf("%d",&B[i]);
	}
	for(i=0;i<n;i++)
	{
	  printf("%d\n",A[i]+B[i]);	
	}
}
