#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MaxSize 50
#define ElemType char
typedef struct 
{
    ElemType data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack *S){
    SqStack *p=nullptr;
    p=S;
    p->top=-1;
}

bool StackIsEmpty(SqStack *S){
    return (S->top==-1? true:false);
}

bool Push(SqStack *S,ElemType x){
    if(S->top==MaxSize-1){
        return false;
    }
    S->data[++S->top]=x;
    return true;
}

bool Pop(SqStack *S,ElemType *x){
    if(S->top==-1){
        return false;
    }
    *x=S->data[S->top--];
    return true;
}

ElemType GetTop(SqStack S){
    ElemType x;
    if(S.top==-1){
        return false;
    }
    x=S.data[S.top--];
    return x;
}

//检查括号是否匹配
bool CheckBracket(char str[],int length){
    SqStack s;
    SqStack *p=&s;
    InitStack(p);
    for(int i=0;i<length;i++){
        if(str[i]=='('||str[i]=='['||str[i]=='{'){
            Push(p,str[i]);
        }
        else{
            if(StackIsEmpty(p))
            return false;
            ElemType x;
            ElemType *q=&x;
            Pop(p,q);
            if(str[i]==')'&&x!='(')
                return false;
            if(str[i]==']'&&x!='[')
                return false;
            if(str[i]=='}'&&x!='{')
                return false;
        }
    }
    return StackIsEmpty(p);
}
char res[100];
char *TranPolish(char str[]){
    SqStack s;
    SqStack *p=&s;
    InitStack(p);
    int i=0;
    int j=0;
    char x;
    char *q=&x;
    while(str[i]!='\0'){
            if(str[i]>='0'||str[i]<='9'){
            res[j++]=str[i];
            }
            if(str[i]=='+'||str[i]=='-'){
                if(StackIsEmpty(p))
                Push(p,str[i]);
                else if(GetTop(s)=='+'||GetTop(s)=='-'||GetTop(s)=='*'||GetTop(s)=='/'){
                    Pop(p,q);
                    res[j++]=x;
                }
            }
            else if(str[i]=='('){
                Push(p,str[i]);
            }
            else if(str[i]==')'){
                    Pop(p,q);
                    res[j++]=x;
                    while (x!='(')
                    {
                    Pop(p,q);
                    res[j++]=x;
            }
            }
            if(str[i]=='/'||str[i]=='*'){
                Push(p,str[i]);
            }
        }
        while (!StackIsEmpty(p))
        {   
            Pop(p,q);
            res[j++]=x;
        }
        return res;
}
int main(){
    SqStack S;
    SqStack *p=nullptr;
    p=&S;
    InitStack(p);
    // Push(p,1);
    // Push(p,2);
    // Push(p,3);
    char str[]="1+1*1";
    printf("%s",TranPolish(str));
    // CheckBracket(str,6);
    // printf("%d",CheckBracket(str,7));
    // printf("%d",StackIsEmpty(p));
}

