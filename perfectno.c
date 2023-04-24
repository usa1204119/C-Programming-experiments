#include<stdio.h>
void main()
{
	int a,b,i,sum=0;
	printf("\nEnter positive integer");
	scanf("%d",&a);
	b = a;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{sum = sum+i;}
	}
	if(sum == b)
	{printf("\n%d is perfect number\n",b);}
	else
	{printf("\n%d is not perfect number\n",b);}
}
