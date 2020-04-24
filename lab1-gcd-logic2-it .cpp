#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,s;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 if(a<0)
  a=-1*a;
 if(b<0)
  b=-1*b;
 if(a==0 &&b==0)
  printf("doesnt exist");
 if(a<b)
  {a=a^b;
   b=a^b;
   a=a^b;
  }
 while(b%a!=0)
  { 
   if(a==0)
   	return b;
   else 
    {   
	 s=a;
     a=b%a;
     b=s;}
  }
  return a;
}
