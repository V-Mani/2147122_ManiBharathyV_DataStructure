#include<stdio.h>
int insert(int num);
int sumAvg();
int display();
int queue[100];
int front=-1,rear=-1;
int n;
void main(){
    printf("Enter the size of the Queue: ");
    scanf("%d",&n);
    insert(n);
    sumAvg();
    display();
}

int insert(int num){
    while(rear<num)
    {
        if(rear==-1 && front==-1){
            rear=0;
            front=0;
        }
        printf("Enter the element>>");
        scanf("%d",&queue[rear]);
        rear=rear+1;
        if(rear>=num){
            printf("Queue full\n");
        }
    }
    return 0;
}

int sumAvg(){
    int item,sum=0,avg=0;
    while(front<=n){
            item = queue[front];
            front=front+1;
            rear=rear+1;
            queue[rear]=item;
            sum=sum+item;
    }
    front=0;
    rear=n;
    avg=sum/n;
    printf("sum>>%d\n",sum);
    printf("avg>>%d\n",avg);
    return 0;
}

int display(){
    int item;
    printf("queue contents\n");
    while(front<n){
            item = queue[front];
            front=front+1;
            rear=rear+1;
            queue[rear]=item;
            printf("%d\n",item);
    }
    front=0;
    rear=n;
    return 0;
}
