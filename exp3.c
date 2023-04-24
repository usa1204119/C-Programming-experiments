#include<stdio.h>
void main()
{
	int a,b,c,n,temp;
	a=0;
	b=1;
	c=n;
	printf("\nEnter value of n:");
	scanf("%d",&n);
	printf("\n Fibonacci series for  %d for position \n",n);
	printf("%d %d",a,b);
	while(n>0)
	{
		c = a + b;
		printf("  %d  ", c);
		temp=b;
			b=c;
			a=temp;
			n=n-1;
	}
}
