#include<stdio.h>
#include<stdlib.h>


struct node
{
	int info;
	struct node * next;
};

int main()
{
	int info;	
	struct node *newnode;
	newnode=(struct node *) malloc (sizeof(struct node));
	printf("\n Enter the no to be inserted into the node:\t");
	scanf("%d",&info);	
	(newnode)->info= info;
	(newnode)->next= NULL;
	printf("\nThe info at newnode is %d",(newnode)->info);
	free(newnode);
	return 0;
}
