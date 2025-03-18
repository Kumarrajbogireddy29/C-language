#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("input number of terms:");
	scanf("%d",&n);
	printf("\n the even numbers are");
	for(i=1;i<n;i++)
	{
		printf("%d",2*i);sum+=2*i;
	}
	printf("\n the sum of even natural numbers up to %dterms:%d\n",n,sum);
	getch();
	
}
