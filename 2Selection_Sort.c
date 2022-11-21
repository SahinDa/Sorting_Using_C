//2.Selection Sort
#include<stdio.h>
int main()
{
	int size,*arr,temp,position;
	printf("Enter size of Array : ");
	scanf("%d",&size);
	arr=(int*)calloc(size,sizeof(int));
	printf("Enter %d element to array one by one ",size);
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	for(int i=0;i<size-1;i++)
	{
		temp=arr[i];
		position=i;
		for(int j=i+1;j<=size-1;j++)
		{
			if(temp>arr[j])
			{
				temp=arr[j];
				position=j;
			}
		}
		arr[position]=arr[i];
		arr[i]=temp;
	}
	
	
	printf("Sorted array is \n");
	for(int i=0;i<size;i++)
	printf("%d  ",arr[i]);
}
