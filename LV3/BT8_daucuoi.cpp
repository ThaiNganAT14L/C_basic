#include<stdio.h>
main()
{
	int n,k;
	printf("nhap n= ");
	scanf("%d",&n);
	k=n%10;
	printf("so cuoi: %d",k);
	while(n>=10)
	n=n/10;
	printf("so dau: %d",n);
}
