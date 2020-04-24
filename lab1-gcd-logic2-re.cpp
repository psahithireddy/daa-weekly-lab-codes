#include<stdio.h>
int min(int a,int b);
int gcd(int a,int b,int x)
{ if(a%x==0 && b%x==0)
   return x;
   gcd(a,b,--x);
}
int main()
{int a,b,z;
printf("enter two numbers");
scanf("%d %d",&a,&b);
if(a<0)
a=-1*a;
if(b<0)
b=-1*b;
if(a==0 && b==0)
printf("doesnt exist");
if(a==0)
return b;
if(b==0)
return a;
else
z= gcd(a,b,min(a,b));
printf("%d",z);
return 0;
}

int min(int a,int b)
{if(a<b)
 return a;
 else 
 return b;}

