#include<stdio.h>
int main()
{
	int n; //4 bytes 
	// data type *pointer name
	int *ptr=&n; //ptr points to n ptr integer pointer
	printf("%d %d",&n,ptr);
	// pointing ? >> to find the address of the pointing variable 
}

