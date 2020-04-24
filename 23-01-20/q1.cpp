#include<stdio.h> //computing gcd using dc//
int arr[100];
int gcd(int a,int b)
{ 
 if(a==0)
  return b;
 gcd(b%a,a); 	
}
int divide(int l,int r)
{ 
 int m=(l+r)/2;
 if(l+1==r ||l==r)
 return gcd(arr[l],arr[r]); 

 return gcd( divide(l,m),divide(m+1,r));
}
int main()
{
	int l,r,n,i;
	printf("enter the no.of values");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{arr[i]=0;
	}
	for(i=1;i<=r;i++)
	{
	 scanf("%d",&arr[i]);
     if(arr[i]<0)
     arr[i]=-1*arr[i];
	 }
	 printf("%d",arr[2]);

 return	divide(1,r);
	
}

