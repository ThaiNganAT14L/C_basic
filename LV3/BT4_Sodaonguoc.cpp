#include<stdio.h>
main()
{
	int n,i;
	printf("nhap n= ");
	scanf("%d",&n);
	printf("so dao nguoc: ");
	while(n!=0)
	{ i=n%10;
	  printf("%d",i);
	  n=n/10;}
}
