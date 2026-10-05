#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool valid(char*s){
    char stack[strlen(s)+1];
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        if(ch=='('||ch=='['||ch=='{'){
            stack[++top]=ch;
        }
           else if(ch==')'||ch==']'||ch=='}'){
            if(top==-1){
                return false;
            }
            else{
                char top_char=stack[top--];
                if(ch==')'&&top_char!='(')
                    return false;
                if(ch==']'&&top_char!='(')
                    return false;
                if(ch=='}'&&top_char!='{')
                    return false;
            }
           }
    }
    return top==-1;
}
    int main(){
    char s[]="[{})";
    bool result=valid(s);
    printf("%s:%s",s,result?"TRUE":"FALSE");
    return 0;
    }
