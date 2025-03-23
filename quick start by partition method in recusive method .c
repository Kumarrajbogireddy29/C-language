#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *arr,int L,int R)
{
	int pivot=arr[R];
	int i=L-1,j=L;
	for(;j<R;j++)
	{
		if(arr[j]<pivot)
		{
			i+=1;
			swap(&arr[i],&arr[R]);
		}
	}
	swap(&arr[R],&arr[i+1]);
	return i+1;
}
void quick_sort(int *arr,int L,int R)
{
if(L<=R)
{
	int p=lomuto_partition(arr,L,R);
	quick_sort(arr,L,p-1);
	quick_sort(arr,p+1,R);
}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
