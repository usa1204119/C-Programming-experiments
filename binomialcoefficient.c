#include<stdio.h>
int fact(int x);
void main()
{
int n,r,ncr;
printf("\n enter n and  r:\n");
scanf("%d %d",&n,&r);
ncr=fact(n)/(fact(n-r)*fact (r));
printf("\n binomial coefficient:%d",ncr);}
int fact (int x)
{
if(x==0)
return 1;

else
return(x*fact(x-1));
}
