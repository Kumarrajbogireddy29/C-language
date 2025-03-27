#include<stdio.h>
void printArray(int *arr,int n)
{  int i;
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
}
int get_max(int *arr,int n)
{int i;
	int max=0;
	for(i=0;i<n;i++)
	{
		if (arr[i]>max){
			max=arr[i];
		}
	}
		return max;			
}
void radix_sort(int*arr,int n){
	int max =get_max(arr,n);
	int e=1;
	while(max){
		int counts[10]={0};
		int buckets[10][n];
		int i,j;
		for(i=0;i<n;i++){
			int place=(arr[i]/e)%10;
			buckets[place][counts[place]++]=arr[i];
		}
		int k=0;
		for(i=0;i<10;i++){
			for(j=0;j<counts[i];j++){
				arr[k++]=buckets[i][j];{
				}
			}
			e*=10;
			max /=10;
		}
		
	}
int i;
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
}
int main(){

int n;
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{
	scanf("%d",&arr[n]);
}
radix_sort(arr,n);

}
