#include<stdio.h>
void main()
{
	int a,b;
	int palindrome(int n);
	printf("\n Enter more than two digit number:");
	scanf("%d",&a);
	b = palindrome(a);
	if(a==b)
	{printf("\n %d is palindrome\n",a);}
	else
	{printf("\n %d is not a  palindrome\n",a);}
}
int palindrome(int n)
{
	int r=0;rem;
	while(n!=0)
	{
		rem = n%10;
		r = r*10+rem;
		n=n/10;
		
	}
	return r;
}
