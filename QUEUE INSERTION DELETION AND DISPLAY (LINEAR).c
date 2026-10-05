#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rare=-1;
void insert(){
int item;
if(rare==MAX-1){
    printf("The stack is full\n");
    return ;
}
printf("Enter the element to be inserted :\n");
scanf("%d",&item);
if(front==-1){
    front =0;
}
rare++;
queue[rare]=item;
printf("the element %d is inserted into the array \n",item);
}
void delete(){
    int item;
if(front==-1){
    printf("The queue is empty ");
    return ;
}
item=queue[front];
if(front==rare){
    front=-1;
    rare=-1;}
else{
    front++;
}
printf("The element %d is deleted from the queue /n",item);

}
void display(){
    int i;
if(front==-1){
    printf("The Queue is empty so no elements to display /n");
    return ;
}
for(i=front;i<=rare;i++){
    printf("%d",queue[i]);
    printf("\n");
    printf("\n");
}


}
int main(){
int choice;
while(1){
        printf("\n =======QUEUE OPERTATION======= \n");
printf("1.INSERT \n");
printf("2.DELETE ELEMENT \n");
printf("3.DISPLAY \n");
printf("4.EXIT \n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:
    insert();
    break;
case 2:

    delete();
    break;

case 3:

    display();
    break;

case 4:
    printf("Exiting the program......");
    break;

default:
    printf("Invalid choice entered");
    return 0;

}}
return 0;

}

