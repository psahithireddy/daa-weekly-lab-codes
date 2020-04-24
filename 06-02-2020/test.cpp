#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,n;
	printf("enter the no. of arrays=");
	scanf("%d",&k);
	printf("\n");
	printf("enter size of each arrays=");
	scanf("%d",&n);
	printf("\n");
	int arr[k][n+1];
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=rand()%100;
		}
		
		int i1,i2,temp;
		for (i1=0;i1<n-1;i1++)
		{
			for(i2=0;i2<n-i1-1;i2++)
			{
				if(arr[i][i2]>arr[i][i2+1])
				{
					temp=arr[i][i2];
					arr[i][i2]=arr[i][i2+1];
					arr[i][i2+1]=temp;
				}
			}
		}
		arr[i][n]=100;
	}
	
	printf("your arrays=\n");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int *p[k];
	for(int i=0;i<k;i++)
	p[i]=&arr[i][0];
	int arr2[n*k];
	int min=100;
	int index;
	for(int i=0;i<(n+1)*k;i++)
	{
	min=100;
	for(int j=0;j<k;j++)
	{
		if(*p[j]<min)
		{
		min=*p[j];
		index=j;
		}
	}

    arr2[i]=min;
    p[index]=p[index]+1;
	}
	
	for(int i=0;i<n*k;i++)
	{
		printf("%d ",arr2[i]);
	}

}
