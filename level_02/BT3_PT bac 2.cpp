#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,denta;
	float x1,x2,x3;
	printf("Phuong Trinh b2: aX2+ bx + c=0");
	printf("nhap a, b, c:");
	scanf("%d %d %d",&a,&b,&c);
	denta=(b*b)-(4*a*c);
	if(denta>0){
					x1=(-b+sqrt(denta))/2*a;
					x2=(-b-sqrt(denta))/2*a;
					printf("x1= %f, x2= %f",x1,x2);}
	if(denta<0)
		printf("vo nghiem");
	if(denta==0) printf("PT co nghiem kep x= %d",-b/(2*a));		
}
