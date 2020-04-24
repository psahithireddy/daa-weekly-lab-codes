#include<stdio.h> //no of -ve no.s using dc//
int arr[100];
int count(int a)
{ 
 if(a<0)
 return 1;
 else 
 return 0;
}
int divide(int l,int r)
{ 
 int m=(l+r)/2;
 if(l==r)
 {
   return count(arr[l]);
}
 return divide(l,m)+divide(m+1,r);
}
int main()
{
	int l,r,n,i;
	printf("enter the no.of values");
	scanf("%d",&r);

	for(i=0;i<r;i++)
	{
	 scanf("%d",&arr[i]);
	 }

 printf("-%d-",divide(0,r-1));
	
}

