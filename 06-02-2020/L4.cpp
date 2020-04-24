#include<stdio.h>
#include<stdlib.h>
struct node
{   
    struct node*lptr;
	int data;
	struct node *rptr;
};
struct node*hptr=NULL;
int inorder(struct node*thptr);
int bst(int x);
int main()
{
	int n,m,k;
	printf("enter no. of arrays:");
	scanf("%d",&n);
	printf("enter the size of each array:");
	scanf("%d",&m);
	int arr[n][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=rand()%100;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",arr[i][j]);
			bst(arr[i][j]);
		}
		printf("\n");
	}
	printf("\n the arrays in sorted order =");
	inorder(hptr);
	return 0;
}
 int bst(int x)
 {  
 	struct node*temp=(struct node*)malloc(sizeof(struct node));
 	temp->rptr=NULL;
	temp->data=x;
 	temp->lptr=NULL;
 	if(hptr==NULL)
 	{
 	 hptr=temp;	
	}
	 else
	 {
	 	struct node*ptr=hptr;
	 	struct node*pptr=NULL;
	 	while(ptr!=NULL)
	 	{
		 pptr=ptr;
	 	 if(x<ptr->data)
	 	 {
	 	 	ptr=ptr->lptr;
		  }
		  else
		  { 
		    ptr=ptr->rptr;
		  }
		 }
		 if(x<pptr->data)
		  pptr->lptr=temp;
		 else
		  pptr->rptr=temp;
	 	
	 }
	 return 0;
 }
 int inorder(struct node*thptr)
 {  
    if(thptr==NULL)
    return 0;
 	inorder(thptr->lptr);
 	printf("%d ",thptr->data);
 	inorder(thptr->rptr);
 }
	
