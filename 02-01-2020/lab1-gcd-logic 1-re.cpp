#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
if(a==0)
 return b;
 if(b==0)
 return a;
 if(a==b)
 return b;
 else if(a>b)
 gcd(a-b,b);
else
 gcd(a,b-a);
 
}
int main()
{int t,a,b,i;
scanf("%d %d",&a,&b);
if(a<0)
 a=-1*a;
 if(b<0)
 b=-1*b;
 if(a==0 && b==0)
 printf("gcd doesnt exist");
 int z=gcd(a,b);
 printf(" gcd is %d",z);
return 0;
}
