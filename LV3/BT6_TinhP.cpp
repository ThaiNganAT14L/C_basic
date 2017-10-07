#include<stdio.h>
main()
{
	int i,n,P=1;
	printf("nhap n");
	scanf("%d",&n);
	for(i=1;i<=2*n;i=i+1)
		{if(i%2==0) { P=P*i;}}
	printf ("P= %d",P);	
}
