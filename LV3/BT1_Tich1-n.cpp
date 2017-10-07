#include<stdio.h>
main()
{
	int n,i,S=1;
	printf("nhap n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1)
		{S=S*i;}
	printf("tich tu 1 - n la: %d",S)	;
}
