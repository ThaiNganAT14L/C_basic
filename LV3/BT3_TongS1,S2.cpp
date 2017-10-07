#include<stdio.h>
main()
{
	int n,i=1,S1=0;
	float S2=0;
	printf("nhap n= ");
	scanf("%d",&n);
	do  {
		S1=S1+i;
		S2=S2+(1.0/i);
		i=i+1;}
	while(i<=n);
	printf("S1= %d ,S2= %f",S1,S2);
}
		
		
