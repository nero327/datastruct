#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MaxSize 50
typedef struct 
{
    int data[MaxSize];
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

bool Push(SqStack *S,int x){
    if(S->top==MaxSize-1){
        return false;
    }
    S->data[++S->top]=x;
    return true;
}

bool Pop(SqStack S,int x){
    if(S.top==-1){
        return false;
    }
    x=S.data[S.top--];
    return true;
}

int GetTop(SqStack S){
    int x;
    if(S.top==-1){
        return false;
    }
    x=S.data[S.top--];
    return x;
}

int main(){
    SqStack S;
    SqStack *p=NULL;
    p=&S;
    InitStack(p);
    // Push(p,1);
    // Push(p,2);
    // Push(p,3);
    printf("%d",StackIsEmpty(p));
}










