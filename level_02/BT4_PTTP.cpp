#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,denta;
	float x1,x2,x3;
	printf("Phuong Trinh trung phuong : aX4+ bx2 + c=0");
	printf("nhap a, b, c:");
	scanf("%d %d %d",&a,&b,&c);
	denta=(b*b)-(4*a*c);
	if(denta>0){
					x1=(-b+sqrt(denta))/2*a;
					x2=(-b-sqrt(denta))/2*a;
				if(x1>=0 && x2>=0){printf("x1= %f, x2= %f, x3= %f, x4= %f",sqrt(x1),-sqrt(x1),sqrt(x2),-sqrt(x2));}
				if(x1>0 && x2<0){printf("x1= %f, x2= %f",sqrt(x1),-sqrt(x1));}
				if(x1<0 && x2>0){printf("x1= %f, x2= %f",sqrt(x2),-sqrt(x2));}
				if(x1<0 && x2<0){printf("vo nghiem");}}
	if(denta<0)
		printf("vo nghiem");
	if(denta==0) {x1=-b/(2*a);
				  if(x1>=0){printf("x1= %f, x2= %f",sqrt(x1),-sqrt(x1));}
				  else 	printf("vo nghiem");
				}		
}
