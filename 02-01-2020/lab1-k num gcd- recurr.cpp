#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
if(a==0)
 {
 return b;}
 gcd(b%a,a);
 
}
int main()
{int t,a[100],i,z,u;
printf("enter value of k\n");
scanf("%d",&t);
for(i=0;i<t;i++)
{
  scanf("%d",&a[i]);	
  if(a[i]<0)
  a[i]=-1*a[i];
}
for(i=0;i<t;i++)
{
  if(a[i]==0)
  u=u+1;
}
 if(u==t)
  printf("gcd doesnt exist\n");
 else
  {
    for(i=0;i<t-1;i++)
    {
      z=gcd(a[i],a[i+1]);
      a[i+1]=z;
    }
  }  
printf("gcd is %d",z); 			
return z;
}
