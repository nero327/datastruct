#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstdbool>
#define ElemType char
typedef struct Linknode
{
    ElemType data;
    struct Linknode *next;
}Stack,*LinkStack;

static LinkStack InitStack(LinkStack &s){
    s=(LinkStack)malloc(sizeof(Stack));
    s->next=nullptr;
    return s;
}
static bool Push(LinkStack &s,ElemType x){
    LinkStack p=nullptr;
    p=(LinkStack)malloc(sizeof(Stack));
    p->data=x;
    p->next=s->next;
    s->next=p;
    return true;
}
static bool Pop(LinkStack s,ElemType &x){
    LinkStack p=nullptr;
    if(s->next==nullptr){
        return false;
    }
    else{
        p=s->next;
        x=p->data;
        s->next=p->next;
        free(p);
    }
    return true;
}

static bool StackEmpty(LinkStack s){
    return(s->next==nullptr)?true:false;
}
static int StackLength(LinkStack s){
    int x=0;
    s=s->next;
    while (s)
    {
        s=s->next;
        x++;
    }
    return x;
}

static bool Gettop(LinkStack s,ElemType &x){
    int p=0;
    if (s->next==nullptr)
    {
        return false;
    }   
    x=s->next->data;   
    return true;
}
class A{
    static const int aa=1;
    int bb=1;
};

