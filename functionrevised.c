//Program to find factorial using function
#include<stdio.h>
void main(){
	int n;	
	void factorial(int a );
	printf("\nEnter number:");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{f = f*i;}
	printf("\nFactorial of %d = %d\n",a,f);
}
