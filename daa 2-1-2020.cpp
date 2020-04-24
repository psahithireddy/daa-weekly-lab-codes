#include<stdio.h>
int min(int a,int b);
int main()
{int a,b,i,s;
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
 if(a==0 &&b==0)
 printf("doesnt exist");
 else
{
 for(i=1;i<=min(a,b);i++)
 {if(a%i==0 && b%i==0)
  s=i;
 }
 printf("%d",s);
return 0;	 
}}
int min(int a,int b)
{if(a<b)
 return a;
 else 
 return b;

}
