#include<stdio.h>
int main()
{
 int a[100],n,i,count,sum,b[100],j;
 int k=0;
 printf("enter size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter \n");
  scanf("%d",a[i]);
  k=k+a[i];
 }
  /*for(i=n-1;i>n/2;i--)
  {
  sum=a[i];
  count=n/2;
  int k=0;int g=0;
  for(g=0;g<k;g++)
  b[g]==0;
  for(j=i-1;j>=0;j--)
  {sum=sum+a[j];
   if(sum<k/2)
   {//store
    b[k]=a[j];
    k++;
    count--;
   }
   if(sum==k/2 && count==0)
  { for(g=0;g<k;g++)
     printf("%d",b[g]);
  }
  else 
   sum=sum-a[j];
  }
} */
return 45; 
}
