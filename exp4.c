#include<stdio.h>
void main()
{
	int i,j,n,count;
	printf("\n Enter last number upto which you want to display prinme number:");
	scanf("%d",&n);
	printf("\n Prime nmbers between 1 to %d :\n",n);
	for (i=1;i<=n;i++)
	{
		count = 0;
		for (j=1;j<=i;j++)
		{
			if(i%j==0)
			{count++;}
		}
		if (count == 2)
		{	printf("  %d",i);}
	}
	printf("\n");
}
