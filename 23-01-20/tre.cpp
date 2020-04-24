
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,arr[1000][1000],sum=0;
    printf("enter n \n");
    scanf("%d",&n);
    printf("enter data\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
         for (int i = k; i < n-1; i++)      
         {for (int j = k; j < n-i-1; j++)  
           {if (arr[k][j] > arr[k][j+1])  
             {
                 arr[k][j]=arr[k][j]^arr[k][j+1];
                 arr[k][j+1]=arr[k][j]^arr[k][j+1];
                 arr[k][j]=arr[k][j]^arr[k][j+1];
           }}}
    }
     for(int j=0;j<n;j++)
    {
         for (int i = j; i < n-1; i++)      
         {for (int k= j; k< n-i-1; k++)  
           {if (arr[k][j] > arr[k][j+1])  
             {
                 arr[k][j]=arr[k][j]^arr[k][j+1];
                 arr[k][j+1]=arr[k][j]^arr[k][j+1];
                 arr[k][j]=arr[k][j]^arr[k][j+1];
                   }}}}
         for(int i=1;i<n;i++)
             sum=sum+arr[0][i];
         for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    printf("%d",sum);
    
    
    return 0;
}

