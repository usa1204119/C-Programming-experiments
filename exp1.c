#include<stdio.h>
void main()
{
	int a,b,c,sum;
	float avg;
	printf("\nEnter three integer numbers :\n");
	scanf("%d %d %d",&a,&b,&c);
	sum = a+b+c;
	avg = sum/3;
	printf("\nAddition of three integer nos =%d",sum);
	printf("\nAvg of three integer nos =%f",avg);
}
