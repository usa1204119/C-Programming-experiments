#include<stdio.h>
void main()
{
	int a,b,rem,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		rem = a%10;
		sum = sum+(rem*rem*rem);
		a = a/10;
	}
if(sum == b)
{
	printf("\n%d is Armstrojng number \n",b);
}
else
{
	printf("\n%d is not armstrong number \n",b);
}
}	
