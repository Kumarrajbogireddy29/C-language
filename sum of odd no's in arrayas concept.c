#include<stdio.h>
int main()
{
   int n,i,sum=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
   for(i=0;i<n;i++)
   {
   	if(a[i]%2==1)
   	{
   		sum=sum+a[i];
	   }
}
printf("\n sum of odd elemnts:%d",sum);
}
