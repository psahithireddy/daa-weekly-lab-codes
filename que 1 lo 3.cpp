#include<stdio.h>
int main()
{ 
 int a[100],p,k,i;
 printf("enter p");
 scanf("%d",&p);
 printf("enter the size of array");
 scanf("%d",&k);
 for(i=0;i<k;i++)
  	scanf("%d",&a[i]);
 // less than target ,move from front and keep adding , value greater than target move from back//
 for(i=0;i<k;i++)
 {
 	if(p<(a[0]+a[1]))
 	 printf("not prsesent");
	 if(p>(a[k-1]+a[k-2]))
 	 printf("not present");
 	else 
	 { 
	   if(a[i]+a[k-i+1]>p)	
		a[k-i+1]=a[k-i+2];
	   else if(a[i]+a[k-i+1]<p)
		a[i]=a[i+1];
	   else 
		printf("present");
	 	
	  } 
 }
 return 456;
}
 
 

