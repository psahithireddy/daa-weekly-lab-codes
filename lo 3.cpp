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
{int t,a,b,i;
{scanf("%d %d",&a,&b);
if(a<0)
a=-1*a;
if(b<0)
b=-1*a;
 if(b>a)
{
 t=a;
 a=b;
 b=t;
}
 int z=gcd(a,b);
 printf(" gcd is %d",z);
} 
return 0;
}
