#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
int value;
if(top==MAX-1)
{
 printf("stack overflow\n");
 }
 else
 {
    printf("enter value:");
    scanf("%d",&value);
    top++;
    stack[top]=value;
    printf("elements pushed sucessfully\n");
    }
   }
   void pop()
   {
    if(top==-1)
    {
    printf("stack underflow\n");
    }
    else
    {
     printf("popped element:%d\n",stack[top]);
     top--;
     }
    }
    void display()
    {
    int i;
   if(top==-1)
   {
    printf("stack is empty\n");
    }
    else{
    printf("stack elements are:\n");
    for(i=top; i>=0; i--)
        {
        printf("%d\n",stack[i]);
        }
    }
  }
 int main(){
    int choice;
    while(1)
    {
    printf("\n STACK MENU\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. display\n");
    printf("4. exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
     switch(choice)
     {
 case 1:
    push();
     break;
 case 2:
    pop();
     break;
 case 3:
    display();
     break;
 case 4:
     return 0;
}
}
}
