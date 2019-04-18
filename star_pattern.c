#include<stdio.h>


int main()
{
	int n,i,j;
	printf("\nEnter the no of lines to be printed:\t");
	scanf("%d",&n);
	printf("\n------------------PATTERN 1-----------------------------\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n\n\n-------------PATTERN 2----------------------------------\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n\n\n-------------PATTERN 3----------------------------------\n");
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j>=n-i;j--)
		{
			printf("* ");
		}
		printf("\n");
		
	}
	/*for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	*/


	return 0;
}


