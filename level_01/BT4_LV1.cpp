#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,C,S;
	printf("nhap chieu dai canh a= ");
	scanf("%f",&a);
	printf("nhap chieu dai canh b= ");
	scanf("%f",&b);
	printf("nhap chieu dai canh c= ");
	scanf("%f",&c);
	C=a+b+c;
	printf("Chu vi: %f \n",C);
	S= sqrt((C/2)*((C/2)-a)*((C/2)-b)*((C/2)-c));
	printf("Dien tich: %f ",S);
}
