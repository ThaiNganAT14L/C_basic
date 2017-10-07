#include<stdio.h>
main()
{
	int i,n,K,S=0,P=1;
	printf("nhap n=");
	scanf("%d",&n);
	if (n>0)
	{for(i=1;i<=n;i=i+1)
	{ S=S+i;
	  P=P*i;}
	  K=S/n;
	printf("tong S= %d",S);
	printf("tich P= %d",P);
	printf("TB Cong = %d",K);}
	else printf("day ko co phan tu nao");  
}
