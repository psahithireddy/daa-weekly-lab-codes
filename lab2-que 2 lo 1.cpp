#include<stdio.h>
int main()
{
 int a[100000],b,i;
 int j=0;
 printf("enter -2 to stop\n");
 for(i=0;i<100000;i++)
 {scanf("%d",&a[i]);
  if(a[i]==-2)
  break;
 }
 while(a[j]!=-1)
 {
  j=j+1;
 }
 return j+1;
}
