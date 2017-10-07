#include<stdio.h>
main()
{
	int	i,n,m,S=0;
	printf("bat dau N=");
	scanf("%d",&n);
	printf("ket thuc M=");
	scanf("%d",&m);
	for(i=n;i<=m;i=i+1)
		{if(i%2==1){S=S+1;}}
	printf("tong so le %d",S);}	
