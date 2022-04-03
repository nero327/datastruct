#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *next;
}Lnode,*LinkList;

LinkList List_HeadInsert(LinkList Head){
    Lnode *s;
    int x;
    Lnode *h;
    Head=(LinkList)malloc(sizeof(Lnode));
    // Head->next=NULL;
    h=Head;
    h->next=NULL;
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
    while (p&&p->data!=x)
    {
        p=p->next;
    }
    return p;
}
bool IsLocatedElem(LinkList L,int x){
    Lnode *p =L->next;
    bool flag=false;
    while (p)
    {   
        while (p->data=x)
        {
            flag = true;
        }
        
        p=p->next;
        
    }
    return flag;
    
}
int main(){
    Lnode *p=NULL;
    Lnode *m=NULL;
    // m=List_HeadInsert(p);
    m=List_TailInsert(p);
    while(m)
    {
        printf("%d\n",m->data);
        m=m->next;
    }
    // bool t =IsLocatedElem(m,3);
    // printf("%d",t);   
}