#include<stdio.h>
int main()
{ 
 int m,n,h;
 int a[100],b[100],c[100],w;
 for(w=0;w<=100;w++)
 {a[w]=0;
  b[w]=0;
  c[w]=0;
 }
 int i=0,j=0,k=0;
 printf("enter numbers if want to exit press 3\n");
 while(m!=3)
 { 
   scanf("%d",&m);
   if(m==0)
   { 
    a[i]=m;
    i=i+1;
   }
   else if(m==1)
   {
   	b[j]=m;
   	j=j+1;
   }
   else if(m==2)
   {
    c[k]=m;
    k=k+1;
   }
   else 
   break;
 }
 printf("%d %d %d are i,j,k",i,j,k);
 n=i+j+k;
 for(h=i;h<j+i;h++)
  a[h]=b[h-i];  
 for(h=j+i;h<n;h++)
  a[h]=c[h-j-i];
 for(h=0;h<n;h++)
  printf("%d",a[h]);
 return 58;  
}
