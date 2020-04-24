#include<stdio.h>//towers of hanoi//
//t(n)=2t(n-1)+1;//ans is (2 pow n )-1//
int toh(int n)
{
	if(n==1)
	return 1;
	return 2*toh(n-1)+1;
}
int main()
{
	int n,z;
	printf("enter number of disks");
	scanf("%d",&n);
	if(n==0)
	{
		printf("there are zero disks hence no moves");
		goto s;
	}
	 z=toh(n);
	printf("no.of moves required are %d",z);
  s:	return 47;
}
