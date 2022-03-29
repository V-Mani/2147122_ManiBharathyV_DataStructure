#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char MobileModel[50];
	char BrandName[50];
	int MemoryCapacity;
	float Price;
	struct node* next;
};

struct node * head;
struct node * temp;


void insert();
void BrandSort();
void PriceSort();
void Display();

int main()
{	
	char ch1,ch2;
	printf("***-----Lab - 4-----***\n");
	while(ch1!='4')
	{
		printf("\n1. Insert values\n2. Sort the list based on Brand\n3. Sort the list based on Price\n4. Display\n5. Exit..\n");
		scanf("%ch",&ch1);
		switch(ch1)
		{
			case '1':
				{
					insert();
					break;
				}
			case '2':
				{
					BrandSort();
					break;
				}
			case '3':
				{
					PriceSort();
					break;
				}
			case '4':
				{
					Display();
					break;
				}
			case '5':
				{
					printf("\nExiting.....");
					break;
				}
			default:
				{
					printf("\nPlease enter valid choice");
				}
		}
	};
}
void insert(){
	char MobileModel[50];
	char BrandName[50];
	int MemoryCapacity;
	float Price;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL){
		printf("\nEmpty List");
	}
	else{
		printf("\n Enter the Mobile model: ");
		scanf("%s",&MobileModel);
		printf("\n Enter the Brand name: ");
		scanf("%s",&BrandName);
		printf("\n Enter the Memory capacity: ");
		scanf("%d",&MemoryCapacity);
		printf("\n Enter the Price: ");
		scanf("%f",&Price);
		if(head==NULL){
			strcpy(ptr->MobileModel, MobileModel);
			strcpy(ptr->BrandName, BrandName);
			ptr->MemoryCapacity= MemoryCapacity;
			ptr->Price= Price;
			ptr->next= NULL;
			head=ptr;
		}
		else{
			strcpy(ptr->MobileModel, MobileModel);
			strcpy(ptr->BrandName, BrandName);
			ptr->MemoryCapacity= MemoryCapacity;
			ptr->Price= Price;
			ptr->next= head;
			head=ptr;
		}
		printf("\nRecord inserted!");
	}
}
void BrandSort(){

}
void PriceSort(){
	struct node * key;
	struct node * ptr;
	key = head;
	while(key!=NULL)
	{
		temp= key->next;
		while(temp!=NULL)
		{
			if(key->Price > temp->Price)
			{
				//swap
				char temp1[50],temp2[50];
				int temp3;
				float temp4;
				
				strcpy(temp1,key->MobileModel);
				strcpy(key->MobileModel,temp->MobileModel);
				strcpy(temp->MobileModel,temp1);
				
				strcpy(temp2,key->BrandName);
				strcpy(key->BrandName,temp->BrandName);
				strcpy(temp->BrandName,temp2);
				
				temp3 = key->MemoryCapacity;
				key->MemoryCapacity = temp->MemoryCapacity;
				temp->MemoryCapacity = temp3;
				
				temp4 = key->Price;
				key->Price = temp->Price;
				temp->Price = temp4;
			}
			temp= temp->next;
		}
		key= key->next;
	}
}
void Display(){
	int i =0;  
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
        	printf("\n**********************************\n");
            printf("Mobile Model: %s\n",ptr->MobileModel);
			printf("Brand Name: %s\n",ptr->BrandName);
			printf("Memory Capacity: %d\n",ptr->MemoryCapacity);
			printf("Price: %f\n",ptr->Price);
//			printf("\n**********************************\n");
            ptr = ptr->next;  
        }  
    }
}

