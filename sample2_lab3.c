#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node *next;
};
struct node *head;
struct node *ptr,*ptr1;

void insert();
void displayOriginal();
void deleteNegative();
void finalDisplay();

int main()
{
	int n, i, val;
	
	printf("Enter the size of List: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&val);
		insert(val);
	}
	
	displayOriginal();
	deleteNegative(n);
	finalDisplay();
}

void insert(int val)
{ 
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nEmpty list");  
    }  
    else  
    {     
        ptr->data = val;  
        ptr->next = head;  
        head = ptr;  
        printf("Node inserted\n");  
    }  
}

void displayOriginal()
{
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nOriginal values >>>\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}

void deleteNegative(int n)
{
 	while(ptr != NULL)
	{
		if(ptr->data <=0)
		{
			ptr1 = ptr->next;
			ptr ->next = ptr1 ->next;  
			
			free(ptr1);
			ptr = ptr->next;
			
		}
		else
		{
			ptr = ptr->next;
		}
	}
}

void finalDisplay()
{  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\n\nAfter deleting the negative vlaue >>> \n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    } 
}
