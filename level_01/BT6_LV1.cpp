#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("nhap so a: ");
	scanf("%d",&a);
	b=a%10;
	printf("so dao nguoc %d",b);
	d=a%100;
	c=d/10;
	printf(" %d ",c);
	a=a/100;
	printf("%d",a);
	
}

