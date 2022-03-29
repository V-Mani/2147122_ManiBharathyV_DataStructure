#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int value;
  struct node *next;
};
struct node *head;

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
	deleteNegative();
	finalDisplay();
}

void insert(int val)
{
	
}

void displayOriginal()
{
	
}

void deleteNegative()
{
	
}

void finalDisplay()
{
	
}
