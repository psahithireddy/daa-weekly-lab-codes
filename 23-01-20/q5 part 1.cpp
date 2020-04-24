#include<stdio.h>
int b[100];
int k=0;
int i,p;
int merge(int arr[],int l,int m,int r)
{  int v=m; 
     k=l;
     p=l;
      int w=m+1;
    while(l<=v && w<=r)
    {
	if(arr[l]>arr[w])
	{
		b[k]=arr[w];
		w=w+1;
	}
	else
	{
		b[k]=arr[l];
		l=l+1;
	}
	k=k+1;
	}
	printf("%d\n",k);
	while(l<=v)
	{ 
	  b[k]=arr[l];
	  k=k+1;
	  l=l+1;
    }
	while(w<=r)
	{ 
	  b[k]=arr[w];
	  k=k+1;
	  w=w+1;
    }
	for(i=p;i<=r;i++)
	{
	printf("%d --%d",b[i],i);
	printf("\n");
	}	
	for(i=p;i<=r;i++)
	{
	arr[i]=b[i];
    }
	}
int mergesort(int arr[],int l,int r)
{
	int m=(l+r)/2;
	if(l==r)
	 return 1;
 	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	printf("%d %d %d\n",l,m,r);
    merge(arr,l,m,r);	
}

int main()
{
	int arr[100],r;
	printf("enter no.of elements u need");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
	 scanf("%d",&arr[i]);
	}
	mergesort(arr,0,r-1);
	for(i=0;i<=r-1;i++)
	{
	 printf("%d",arr[i]);
	}
	return 45;
	
}
