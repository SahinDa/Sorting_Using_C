//1.Bubble Sort 
#include<stdio.h>
int main()
{
	int size,*arr,temp;
	printf("Enter the size of array ");
	scanf("%d",&size);
	arr=(int*)malloc(sizeof(int)*size);
	printf("Enter %d element to array one by one ",size);
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<size-1;i++)
	for(int j=0;j<size-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	printf("Sorted array is : ");
	for(int i=0;i<size;i++)
	printf("%d ",arr[i]);
}
