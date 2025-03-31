#include<stdio.h>
int modify(int *a){
	a[0]=147;
}
int main()
{
	int a[5]={10,20,30,40,50};
	printf("before modification:%d",a[0]);
	modify(a);
	printf("/n  after modification: %d",a[0]);
	// sending an array to a function will always be call by reference//
	//array as an function//
	//call by reference //
	// array as an argument  
}

