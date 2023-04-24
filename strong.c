#include<stdio.h>
void main()
{
	int a,b,i,rem,ft,sum=0;
	printf("\nEnter positive integer:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		rem = a%10;
		ft = 1;
		for(i=1;i<=rem;i++)
		{ft=ft*i;}
		sum+=ft;
		a/=10;
	}
	if(sum == b)
	{printf("number :%d is strong no\n",b);}
	else
	{printf("number :%d is not strong no\n",b);}

}
