#include<stdio.h>
int b[100],k;
int sort(int a[],int l,int m,int r);
int main()
{
	int k1,count,h,g,y,x;
	printf("enter the no. of arrays");
	scanf("%d",&k1);
	int n[k1];
	int i=0;
	count=0;
	while(i<k1)
	{
      scanf("%d",&n[i]);
      count=n[i]+count;
      i++;
	}
	int arr[count];
	//printf("%d",count);
	for(int j=0;j<count;j++)
	{
		scanf("%d",&arr[j]);
	}
	h=0;
	x=n[0];
	while(h<k1-1)
	{
	sort(arr,0,x-1,x+n[h+1]-1);
	x=x+n[h+1];
	h++;
	}

	for( g=0;g<count;g++)
	printf("%d ",arr[g]);
	return 1;
	
}

int sort(int arr[],int l,int m,int r)
{
	int v=m; 
     k=l;
     int p=l;
     int g;
    while(l<=v && m+1<=r)
    {

	if(arr[l]>arr[m+1])
	{
		b[k]=arr[m+1];
		m++;
	}
	else
	{
		b[k]=arr[l];
		l++;
	}
	k++;
//	printf("%d\n",m);
	}
	while(l<=v)
	b[k++]=arr[l++];
	
	while(m+1<=r)
	{
	b[k++]=arr[(m+1)];
	m=m+1;
	}
	
	for(g=p;g<=r;g++)
	{
		arr[g]=b[g];
	}
	
}
