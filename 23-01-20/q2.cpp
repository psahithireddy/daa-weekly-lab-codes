#include<stdio.h> //no of 1s using dc//
int arr[100];
int count(int a)
{ 
 return a;
}
int divide(int l,int r)
{ 
 int m=(l+r)/2;
 if(l==r)
  return count(arr[l]); 
 return divide(l,m)+divide(m+1,r);
}
int main()
{
	int l,r,n,i;
	printf("enter the no.of values");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{arr[i]=0;
	}
	for(i=0;i<r;i++)
	{
	 scanf("%d",&arr[i]);
	 if(arr[i]!=0 && arr[i]!=1)
	 {
	 	printf("error");
	 	break;
	 }
	 }

 return	(divide(0,r-1));
	
}

