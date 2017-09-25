#include<stdio.h>
int main()
{
	int a,b,c;
	printf("nhap ngay: ");
	scanf("%02d",&a);
	printf("nhap thang; ");
	scanf("%d",&b);
	printf("nhap nam: ");
	scanf("%d",&c);
	c=c%100;
	printf ("%02d/%02d/%d",a,b,c);
}
