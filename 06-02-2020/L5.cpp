#include<stdio.h>
#include<stdlib.h>
struct heap
{
	int a[50];
	int last;
}h;
int minheap(int x);
int deletei();
int count=0;
int *parr[100],x,pre,b[100];
int main()
{
  int n,m,k;
	printf("enter no. of arrays:");
	scanf("%d",&n);
	int *parr[n];
	printf("enter the size of each array:");
	scanf("%d",&m);
	int arr[n][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=rand()%100;
		}
		
		int i1,i2,temp;
		for (i1=0;i1<m-1;i1++)
		{
			for(i2=0;i2<m-i1-1;i2++)
			{
				if(arr[i][i2]>arr[i][i2+1])
				{
					temp=arr[i][i2];
					arr[i][i2]=arr[i][i2+1];
					arr[i][i2+1]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	 parr[i]= &arr[i][0];
	 
	 int j=0;
	 h.last=0; // create a empty heap//
     for(int i=0;i<n;i++)
	 {
	    minheap(*parr[i]);
		printf("\n");
	 }
	 while(j<n*m)
	{
	   b[j]=deletei();			
	  for(int i=0;i<n;i++)
	  {
	  	if(*parr[i]==b[j])
	  	{
	  		pre=i;
	  		break;
		  }
	  }
	  printf("\ndeleted element after %d is %d\n",count,b[j]);
	  j++;
	  parr[pre]=parr[pre]+1;
	  printf("next element to  in heap is %d and pre is %d\n",*parr[pre],pre);
	   if(*parr[pre]==NULL)
	   *parr[pre]=999999;
	   minheap(*parr[pre]);
	  
   }
	  
	printf("\n the arrays in sorted order =");
	for(int i=0;i<n*m;i++)
     {  
        if(b[i]!=999999)
		printf("%d ",b[i]);
     }
	return 1;
}	

int minheap(int x)
{   
   printf("\nentered min heap %d and x is %d\n",count,x);
	h.last++;
	h.a[h.last]=x;
	int t=h.last;
	while((t/2>=1)&&h.a[t]<h.a[t/2])
	{
		//swap a[t] and a[t/2]//
		h.a[t]=h.a[t]^h.a[t/2];
		h.a[t/2]=h.a[t]^h.a[t/2];
		h.a[t]=h.a[t]^h.a[t/2];
		
		// swap coresponding pointers//
		
		t=t/2;
	}
	 printf("end of the min heap and count is %d\n",count);
	 count++;
	 return 1;
  	
}
int deletei()
{
	int x=h.a[1];
	h.a[1]=h.a[h.last];
	h.last--;
	int t=1;
	int mi;
	while(2*t<=h.last)
	{
		if(2*t+1<=h.last)                // if right child is  also present//
		{
			if(h.a[2*t]>h.a[2*t+1])      // left child>right child//
			   mi=2*t;                 
			else
			   mi=2*t+1;
			   
		}
		else                             //only left child is present//
		  mi=2*t;
		
		if(h.a[t]>h.a[mi])
		{
			h.a[t]=h.a[t]^h.a[mi];
			h.a[mi]=h.a[t]^h.a[mi];
			h.a[t]=h.a[t]^h.a[mi];
			
			t=mi;
		  }  
		else 
	   		break;  	  
	}
	return x;
}
