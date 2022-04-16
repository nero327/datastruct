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
    SqStack *p=NULL;
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
int main(){
    SqStack S;
    SqStack *p=NULL;
    p=&S;
    InitStack(p);
    // Push(p,1);
    // Push(p,2);
    // Push(p,3);
    char str[]="{{{}}}}";
    // CheckBracket(str,6);
    printf("%d",CheckBracket(str,7));
    // printf("%d",StackIsEmpty(p));
}
