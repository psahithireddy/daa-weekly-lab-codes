#include<stdio.h>
int main()
{int n,i,j,k;
 printf("enter n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\n");
 for(j=1;j<=n-i+1;j++)
 printf("%d",j);
}
 for(i=1;i<=n;i++)
 {
 printf("\n");
 for(k=i-1;k<=n-1;k++)
 printf(" ");
 j=0;
 while(j<n-k)
 {
 printf("%d",j);
 j++;
}
}
 return 465315;
}

