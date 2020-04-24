#include<stdio.h>
#include<math.h>
int check(int x);
int main()
{
 int n;
 printf("this program runs for n root n time\n enter the value of n\n");
 scanf("%d",&n);
 if(n==1)
 {printf("neither prime nor composite\n");
  return 0;}
 int z=check(n);
 if(z==0)
 printf("not a prime number");
 else if(z==1)
 printf("prime number");
 return 0;
}
 int check(int n)
 {
  int flag=1;
  int x=1;
  int arr[n];
  
  for(int j=2;j<=sqrt(n);j++)
  {
   for(int i=0;i<n;i++)
    arr[i]=1;
   x=1;
   while((j*x)-1<=n)
   {
    arr[(j*x)-1]=99;  
    x++;
   }
   //printf("%d\n",arr[n-1]);
   if(arr[n-1]==99)
   {
    flag=0;break;
    }
  }
  return flag;
  } 
