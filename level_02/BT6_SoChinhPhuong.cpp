#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("nhap so a= ");
	scanf("%d",&a);
	b=sqrt(a);
	if(b*b==a) { printf("%d la so chinh phuong",a);}
	else  printf("%d khong la so chinh phuong",a);
}
