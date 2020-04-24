#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,min,max;
	printf("enter no. of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter elements of the array: ");
	for(int i=0;i<n;i++)
	arr[i]=rand()%1000;
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	if(arr[0]>arr[1])
	 	{
	 		max=arr[0];
	 		min=arr[1];
	 	}
	 	else
	 	{
	 		min=arr[0];
	 		max=arr[1];	
	 	}
	 	for(int j=2;j<n-1;j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
	 			if(arr[j]>max)
	 				max=arr[j];
	 			if(arr[j+1]<min)
	 				min=arr[j];
	 		}
	 		else
	 		{
	 			if(arr[j+1]>max)
	 				max=arr[j+1];	
	 			if(arr[j]<min)
	 				min=arr[j];
	 		}
	 	}
	 	printf("\nmin is %d,max is %d",min,max);
}
	 						
	 		      
