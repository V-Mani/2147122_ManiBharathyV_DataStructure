#include <stdio.h>  
#include <stdlib.h> 

struct Node{
	int data;
	struct Node * next;
};

int main()
{
	struct Node * first = NULL;
	struct Node * secound = NULL;
	struct Node * third = NULL;
	
	first = (struct Node*)malloc(sizeof(struct Node));
	secound = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	first->data=11;
	head->next=secound;
	
	secound->data=12;
	secound->next=third;
	
	third->data=13;
	third->next=NULL;
	
	printList(first);
	
	return 0;
	
}

void printList(struct Node* n)
{
	while(n !=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
