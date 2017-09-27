#include<stdio.h>
int main()
{
	int a;
	printf("nhap a= ");
	scanf("%d",&a);
	if(a%2==0||a%3==0||a%5==0||a%7==0) 
		if(a>7){printf("khong la so nguyen to" );} 
		else if(a==1||a==2||a==3||a==5||a==7){printf("la so nguyen to");} 
			 else printf("khong la so nguyen to" );
	else printf("la so nguyen to");
	
}
