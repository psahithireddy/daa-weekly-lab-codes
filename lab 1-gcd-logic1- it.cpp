#include<stdio.h>
int main()
{
int a,b;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 if(a<0)
 a=-1*a;
 if(b<0)
 b=-1*b;
 if(a==0 && b!=0)
 return b;
 if(b==0 && a!=0)
 return a;
 if(a==0 && b==0)
 printf("doesnt exist");
 else
 while(a!=0 && b!=0)
 {if(a==b)
  return b;
  if(a>b)
  a=a-b;
  if(b>a)
  b=b-a;
 }
 if(a==0)
 return b;
 else 
 return a;
}
