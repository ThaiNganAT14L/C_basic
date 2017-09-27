#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	int a;
	printf("nhap a= ");
	scanf("%d",&a);
	if(a==1){ 															//a=1=> cv,dt tam giac	
				float b,c,d,S,C;
				printf("tinh cv,dt tam giac \n");
				printf("nhap chieu dai 3 canh");
				scanf("%f %f %f",&b,&c,&d);
				C=a+b+c;S= sqrt((C/2)*((C/2)-a)*((C/2)-b)*((C/2)-c));
				printf("CV tam giac : %f. Dien tich: %f",C,S);}
	if(a==2){															//a=2=> cv,dt hinh vuong
				float b;	
				printf("tinh cv,dt hinh vuong \n");
				printf("nhap chieu dai canh HV: ");
				scanf("%f",&b);
				printf("CV= %f, DT= %f",b*4,b*b);}
	if(a==3){															//a=3=> cv,dt hinh chu nhat
				float b,c;
				printf("tinh cv,dt hinh chu nhat \n");
				printf("nhap chieu dai 2 canh HCN: ");
				scanf("%f %f",&b,&c);
				printf("CV= %f, DT= %f",(b+c)*2,b*c);}					
	if(a==4){															//a=4=> cv,dt hinh tron	
				float b;
				printf("tinh cv,dt hinh tron \n");
				printf("nhap ban kinh hinh tron: ");
				scanf("%f",&b);
				printf("CV= %f, DT= %f",2*PI*b,4*PI*b*b);}			
}
