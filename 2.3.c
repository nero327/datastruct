#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}Lnode,*LinkList;

LinkList List_HeadInsert(LinkList Head){
    Lnode *s;
    Lnode *h;
    int x;
    Head=(LinkList)malloc(sizeof(Lnode));
    Head->next=NULL;
    h=Head;
    scanf("%d",&x);
    while (x!=888)
    {   
        s=(LinkList)malloc(sizeof(Lnode));
        s->data=x;
        s->next=h->next;
        h->next=s;
        
        scanf("%d",&x);
    }
    return Head;
}
LinkList List_TailInsert(LinkList L){
    int x;
    L=(LinkList)malloc(sizeof(Lnode));
    LinkList s;
    LinkList r;
    r=L;
    scanf("%d",&x);
    while (x!=888)
    {
        s=(LinkList)malloc(sizeof(Lnode));
        // r->data=x;
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    
    }
    r->next=NULL;
    return L;
    
}
Lnode *GetElem(LinkList L,int i){
    Lnode *p =L->next;
    if(i==0)
    return L;
    if(i<1)
    return NULL;
    int j =1;
    while (p&&j<i)
    {
        p=p->next;
        j++;
    }
    return p;
    
}
Lnode *LocatedElem(LinkList L,int x){
    Lnode *p =L->next;
    while (p!=NULL&&p->data!=x)
    {
        p=p->next;
    }
    return p;
}
void DelteNode(LinkList L,int x){
    LinkList p;
    LinkList q;
    p=GetElem(L,x-1);
    q=p->next;
    p->next=q->next;
    free(q);

}
int main(){
    Lnode *p=NULL;
    Lnode *m=NULL;

    // p=List_HeadInsert(p);
    p=List_TailInsert(p);
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    DelteNode(p,3);
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;

        
    }
    // printf("%d",GetElem(p,3)->data);   
}