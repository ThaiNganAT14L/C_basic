#include <stdio.h>
int main()
{
	float a,b,c,d; 
	printf("nhap diem tb mon 1: ");
	scanf("%f",&a);
	printf ("nhap diem tb mon 2: ");
	scanf("%f",&b);
	printf ("nhap diem tb mon 3: ");
	scanf("%f",&c);
	d=(a+b+c)/3;
	printf("diem tb cong : %.3f ",d);
}
