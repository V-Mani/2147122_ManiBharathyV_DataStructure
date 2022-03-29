#include <stdio.h>  
#include <stdlib.h>  

void push();  
void pop();  
void display();
  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    char choice;     
    printf("\n*********Stack operations using LINKED LIST*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != '4')  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice: \n");        
        scanf("%ch",&choice);  
        switch(choice)  
        {  
            case '1':  
            {   
                push();  
                break;  
            }  
            case '2':  
            {  
                pop();  
                break;  
            }  
            case '3':  
            {  
                display();  
                break;  
            }  
            case '4':   
            {  
                printf("\nExiting....");  
                break;   
            }  
            default:  
            {  
                printf("\nPlease Enter valid choice ");  
            }   
    	};  
	}  
}  

void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("\nnot able to push the element");   
    }  
    else   
    {  
        printf("\nEnter the value: ");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("\nItem pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("\nNo element to pop");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("\nItem popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("\nStack is empty\n");  
    }  
    else  
    {  
        printf("\nPrinting Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  
