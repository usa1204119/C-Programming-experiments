//Program to find factorial using function
#include<stdio.h>
void main(){
	int n,fact;	
	int factorial(int a );
	printf("\nEnter number:");
	scanf("%d",&n);
	fact= factorial(n);
	printf("\nFactorial of %d = %d\n",n,fact);
}
int factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{f = f*i;}
	return f;
}
