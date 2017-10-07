#include<stdio.h>
main()
{   int n,S;
	printf("nhap n=");
	scanf("%d",&n);
	while (n>0)
	{	S=S+n;
		printf("nhap n=");
		scanf("%d",&n);
	}
	printf("tong S= %d",S);
}
