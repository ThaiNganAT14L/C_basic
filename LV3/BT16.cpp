#include<stdio.h>
main()
{
	int	a,b,m,n,BCNN,UCLN;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	n=a;m=b;
	while(n!=m)
		{if(n>m) {n=n-m;}
		 if(m>n) {m=m-n;}	
		}
	UCLN=n;
	BCNN=(a*b)/UCLN;
	printf("%d",BCNN);}
		
	
