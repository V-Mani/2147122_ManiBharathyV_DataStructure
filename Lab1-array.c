#include <stdio.h>
#include <stdlib.h>
#define size 100

void push(int stack[], int item);
int pop(int stack[]);
void display(int stack[]);

int top = -1; //stack top pointer

int main()
{
	
	int stack[size], data;
	char choice;
 	printf("\n*********Stack operations using ARRAYS*******\n");
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
                printf("\nEnter number :: \n");
				scanf("%d", &data);
				push(stack, data);
				break;  
            }  
            case '2':  
            {  
                data = pop(stack);
				if (data != - 1)
				printf("\nItem popped\n", data);
				else
				printf("\nstack is empty\n");
				break;  
            }  
            case '3':  
            {  
                display(stack);
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

void push(int stack[], int item)
{
	if (top == size - 1)
	{
		printf("\nstack is full\n");
	}
	else
	{
		(top)++;
		stack[top] = item;
	}
}

int pop(int stack[])
{
	int value;
	if (top == - 1)
	{
		return - 1;
	}
	else
	{
		value = stack[top];
		(top)--;
		return value;
	}
}

void display(int stack[])
{
	int i;
	for (i = top; i >= 0; i--)
	{
		printf("\n%d", stack[i]);
	}
}
