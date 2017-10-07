#include<stdio.h>
main()
{   int n,MIN;
	printf("nhap n=");
	scanf("%d",&n);
	MIN=n;
	while (n>0)
	{	if(MIN>=n){MIN=n;}
		printf("nhap n=");
		scanf("%d",&n);
	}
	printf("MIN= %d",MIN);
}
