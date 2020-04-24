#include<stdio.h>
#include<random.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	a[i]=random();
	
	for(int i=0;i<10;i++)
	printf("%d ",a[i]);	
	
}
