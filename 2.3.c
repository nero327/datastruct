#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Lnode{
    int data;
    struct Lnode *next;
}Lnode,*LinkList;

bool InitList(LinkList L){
    L=(Lnode *)malloc(sizeof(Lnode));
    if(L==NULL)
    return false;
    L->next=NULL;
    return true;

}
LinkList List_HeadeInsert(LinkList L){
    Lnode *s;
    int x;
    L=(Lnode *)malloc(sizeof(Lnode));
    L->next=NULL;
    scanf("%d",&x);
    while (x!=9999){
        s=(Lnode *)malloc(sizeof(Lnode));
        s->data =x;
        s->next =L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}
void printL(Lnode *L){
    LinkList p;
    p=L->next;
    while(p)    
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main(){
    LinkList L;
    InitList(L);
    List_HeadeInsert(L);
    LinkList p;
    p=L->next;
    while (p)
    {
        printf("%d",p->data);
        p = p->next;
    }
    
}