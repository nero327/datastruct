#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}Lnode,*LinkList;

LinkList List_HeadInsert(LinkList &Head){
    Lnode *s;
    int x;
    Head=(LinkList)malloc(sizeof(Lnode));
    Head=NULL;
    int n=0;
    scanf("%d",&x);
    while (x!=888)
    {   
        s=(LinkList)malloc(sizeof(Lnode));
        if(n==0){
            Head=s;
            Head->next=NULL;
        }
        else{
        s->data=x;
        s->next=Head->next;
        Head->next=s;
        }
        scanf("%d",&x);
        n++;
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
int main(){
    Lnode *p=NULL;
    Lnode *m=NULL;
    Lnode *o=NULL;
    Lnode *l=NULL;
    p=(Lnode *)malloc(sizeof(Lnode));
    // printf("%d",o->data);
    // l=o->next;
    // printf("%d",o->data);
    // printf("%d",l->data);
    // p->data=6;
    p=List_HeadInsert(p);
    // p=List_TailInsert(p);
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    // printf("%d",GetElem(p,3)->data);   
}