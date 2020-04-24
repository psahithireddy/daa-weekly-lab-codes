#include<stdio.h>
int main()
{int t,a[100],z,i,b,p,u,s;
 printf("enter no. of values");
 scanf("%d",&t);
 for(i=0;i<t;i++)
{scanf("%d",&a[i]);
  if(a[i]<0)
  a[i]=-1*a[i];
 }
 u=0;
 for(i=0;i<t;i++)
 {if(a[i]==0)
  u=u+1;
 }
 if(u==t)
 printf("gcd doesnt exist");
 else 
 {
 for(i=0;i<t-1;i++)
{
 b=a[i+1];
 p=a[i];
 if(p<b)
 {b=b^p;
  p=b^p;
  b=b^p;
 }
  while(b%p!=0)
 { 
  if(p==0)
  return b;
  else 
 {  s=p;
  p=b%p;
  b=s;
  }}
  a[i+1]=p;
 }
printf("gcd is %d",p);
return 452;}}
