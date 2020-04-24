#include<stdio.h>
int main()
{ 
 int a[100],p,r,k,i,j;
 int o=0;
 printf("enter p");
 scanf("%d",&p);
 printf("enter the size of array");
 scanf("%d",&k);
 for(i=0;i<k;i++)
  {
  	scanf("%d",&a[i]);
  }
 for(i=0;i<k;i++)
  {
  	for(j=i+1;j<k;j++)
  	{
  	 if(a[j]+a[i]==p)
	  { o=o+1;
	    printf("yes there are q and r in A");
      }
	 }
	 
  }
  if(o==0)
  printf("there exist no such numbers");
  return 56;
}
