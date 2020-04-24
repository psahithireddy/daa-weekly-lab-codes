#include<stdio.h>
int main()
{int n,i,j;
 int k=0;
 printf("enter n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\n");
 for(j=1;j<=n-i+1;j++)
 printf("%d",j);
}
       //part 2//
       printf("\n");
       printf(" enter the value of n \n");
      scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 { printf("\n");
   k=0; 
   while(k<i-1)
 	{
	 printf(" ");
	 k++;
    }
 for(j=i;j<=n;j++)
 printf("%d",j);
}
       // part 3//
       printf("\n");
       printf(" enter the value of n \n");
      scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("\n");
	k=1;
	while(k<=i)
	{
		printf("%d",k);
		k++;
	}
}
 
      // part 4//
      printf("\n enter the value of n \n");
      scanf("%d",&n); 
for(i=n;i>=1;i--)
{ 
  printf("\n");
  k=0;
  while(k<i-1)
  {
  	printf(" ");
  	k++;
  }
  for(j=i;j<=n;j++)
  { 
   printf("%d",j);
  }
}
        // part 5//
        printf("\n");
        printf(" enter the value of n \n");
      scanf("%d",&n);
      if(n%2==0)
     {
	   for (i=1;i<=n/2;i++)
      { printf("\n");
        k=0;
        while(k<i-1)
        {
         printf(" ");
         k++;
        }
        for(j=i;j<=n-i+1;j++)
        {
         printf("%d",j);
        }
        }
        for(i=1;i<=n/2;i++)
        { 
          printf("\n");
          k=0;
          while(k<n/2-i)
         {
           printf(" ");
           k++;
         }
        for(j=n/2-i+1;j<=n/2;j++)
         printf("%d",j);
        for(j=n/2+1;j<=n/2+i;j++)
         printf("%d",j);
}
}
      else
      {
      	for (i=1;i<=n/2+1;i++)
       { printf("\n");
         k=0;
         while(k<i-1)
        {
         printf(" ");
         k++;
        }
         for(j=i;j<=n-i+1;j++)
        {
         printf("%d",j);
        }
        }
        for(i=1;i<=n/2+1;i++)
        { 
          printf("\n");
          k=0;
          while(k<n/2-i+1)
         {
           printf(" ");
           k++;
         }
        for(j=n/2-i+2;j<=n/2;j++)
         printf("%d",j);
        for(j=n/2+1;j<=n/2+i;j++)
         printf("%d",j);
}
	  }

 return 4545;
}
