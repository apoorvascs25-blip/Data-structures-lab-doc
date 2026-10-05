#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
char stack[MAX];
void push(char ch){
stack[++top]=ch;
}
char pop(){
return stack[top--];
}
char seek(){
return stack[top];
}
int precedence(char ch){
if(ch=='+'||ch=='-'){
    return 1;}
if(ch=='*'||ch=='/'){
    return 2;
}
return 0;
}
int main(){
int i=0,j=0;
char ch;
char infix[MAX],postfix[MAX];
printf("Enter the valid infix expression:");
scanf("%s",&infix);
for(i=0;infix[i]!='\0';i++){
    ch=infix[i];
if(isalnum(ch)){
    postfix[j++]=ch;
}
else if(ch=='('){
    push(ch);
        }
else if(ch==')'){
        while(top!=-1&& seek()!='('){
                postfix[j++]=pop();
              }
  pop();
}
else{
    while(top!=-1 && seek()!='('&&precedence(seek())>=precedence(ch)){
            postfix[j++]=pop();
          }
          push(ch);
}
}
while(top!=-1){
    postfix[j++]=pop();
}
postfix[j]='\0';
printf("The final postfix expression is :%s",postfix);
return 0;
}
