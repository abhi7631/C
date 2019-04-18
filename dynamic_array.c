#include<stdio.h>
#include<stdlib.h>

int * create(int );
void display(int * ,int);
int count;
int main()
{
	int n,i,ch,free_count=0;
	int *p;
	count=0;
	while(1)
	{
		printf("\n------MENU------");
		printf("\n1.Create array.\n2.Display\n3.Delete\n4.Exit\nChoice:\t");
		scanf("%d",&ch);		
		switch(ch)
		{
			case 1:	printf("\n Enter the no of elements of the array:\t");
				scanf("%d",&n);
				p = create(n);
				free_count=1;
				break;
			case 2:	if (free_count==1)
					display(p,n);
				else
					printf("\nThe array you are trying to display  does not exist.");
				break;
			case 3:	if (free_count>0 && free_count<2)
				{
					free_count=0;
					free(p);
					printf("\nArray deleted...!!!");
				}				
				else
					printf("\nPlease create the array before deleting it:");
				break;
			case 4: //count++;
				exit(0);
			default: printf("\n Enter a valid choice...!!!\n");
		}
	}
	
	
	
	

	return(0);
}

int * create (int n)
{
	int i, *p;
	count++;	
	p = (int *) malloc( n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\nEnter element no %d :\t",i+1);
		scanf("%d",p+i);
	}
	
	return(p);
}
void display(int *p, int n)
{
	int i;
	if(count>0)
	{
		count++;
		printf("\nThe array is:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",*(p+i));
		}
	}
	else
		printf("\nPlease create the array first...!!!");	
}
