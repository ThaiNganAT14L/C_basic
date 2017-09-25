#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float c;
	printf("loga(b) nhap a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	c= log(b)/log(a);
	printf("loga(b)= %f",c);
}
