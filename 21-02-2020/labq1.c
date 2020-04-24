#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[100],i=0,n;
int pro[100];
int binary(int x)
{
 while(x!=0)
 {
  arr[i]=x%2;
  x/=2;
  i++;
 }
 }
int multiply(int a[])
 {
  int c,j;
  pro[0]=0;
  for(j=0;j<i;j++)
  { 
    c=0;
    for(int k=j;k<i+j+1;k++)
   { 
 
     if(pro[k]==1&&c==1)
     {
        if(a[j]*a[k-j]==1)
       {
         pro[k]=1;
         c=1;
        }
     }
      
      else if(pro[k]==1 &&c==0)
     {  
       if(a[j]*a[k-j]==1)
       { 
         pro[k]=0;
         c=1;
        }
      else
       {
        pro[k]=a[j]*a[k-j]+pro[k]+c;
        c=0;
       } 
      }

       else 
       { 
         if( a[j]*a[k-j]==1 && c==1)
         { c=0;
           pro[k]=a[j]*a[k-j]+pro[k]+c;
           c=1;
          }
          else
         {
          pro[k]=a[j]*a[k-j]+pro[k]+c;
           c=0;
          }   
       }
     } 
   }   
 }
  
   
void main()
{ 
  printf("this program runs in o(logn)square time\n");
  printf("enter the value of n\n");
  scanf("%d",&n); 
  binary(n);
  multiply(arr);
  printf("number in binary is :");
  for(int j=i-1;j>=0;j--)
   printf("%d",arr[j]);
  printf("\n");
  printf("binary product is: ");
  for(int j=2*i-1;j>=0;j--)
   printf("%d",pro[j]);
  printf("\n");
 }
  

