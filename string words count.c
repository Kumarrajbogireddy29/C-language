#include<stdio.h>
int main()
{ 
	char str[100];
    int i,j,vc;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]==' ')
    	{
    		vc++;
		}
	}
	printf("%d",vc);
	}
