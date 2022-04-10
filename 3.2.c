#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Linknode
{
    int data;
    struct Linknode *next;
}Stack,*LinkStack;

LinkStack InitStack(LinkStack s){
    s=(LinkStack)malloc(sizeof(Stack));
    s->next=NULL;
    return s;
}
bool Push(LinkStack s,int x){
    LinkStack p=NULL;
    p=(LinkStack)malloc(sizeof(Stack));
    p->data=x;
    p->next=s->next;
    s->next=p;
    return true;
}
bool Pop(LinkStack s){
    LinkStack p=NULL;
    if(s->next==NULL){
        return false;
    }
    else{
        p=s->next;
        s->next=p->next;
        free(p);
    }
    return true;
}

bool StackEmpty(LinkStack s){
    return(s->next==NULL? true:false);
}
int StackLength(LinkStack s){
    int x=0;
    s=s->next;
    while (s)
    {
        s=s->next;
        x++;
    }
    return x;
}

int Gettop(LinkStack s){
    int p=0;
    if (s->next==NULL)
    {
        return p;
    }   
    p=s->next->data;   
    return p;
}
int main(){
    LinkStack s=NULL;
    s=InitStack(s);
    int x=0;
    Push(s,1);
    Push(s,2);
    Push(s,3);
    Push(s,4);
    Push(s,5);
    x=StackLength(s);
    printf("Length:%d\n",x);
    Pop(s);
    Push(s,9);
    printf("%d\n",Gettop(s));
}

