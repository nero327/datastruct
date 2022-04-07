#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node {
    int data;
    struct node* next;
}Lnode, * LinkList;

LinkList List_HeadInsert(LinkList Head) {
    Lnode* s = NULL;
    Lnode* h = NULL;
    int x = 0;
    Head = (LinkList)malloc(sizeof(Lnode));
    Head->next = NULL;
    h = Head;
    scanf("%d", &x);
    while (x != 888)
    {
        s = (LinkList)malloc(sizeof(Lnode));
        s->data = x;
        s->next = h->next;
        h->next = s;

        scanf("%d", &x);
    }
    return Head;
}
LinkList List_TailInsert(LinkList L) {
    int x = 0;
    L = (LinkList)malloc(sizeof(Lnode));
    LinkList s = NULL;
    LinkList r = NULL;
    r = L;
    scanf("%d", &x);
    while (x != 888)
    {
        s = (LinkList)malloc(sizeof(Lnode));
        // r->data=x;
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);

    }
    r->next = NULL;
    return L;

}
Lnode* GetElem(LinkList L, int i) {
    Lnode* p = NULL;
    p = L->next;
    if (i == 0)
    {        
return L;    
}
    if (i < 1)
    {        
return NULL;
    }
    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;

}
Lnode* LocatedElem(LinkList L, int x) {
    Lnode* p = NULL;
    p = L->next;
    while (p != NULL && p->data != x)
    {
        p = p->next;
    }
    return p;
}
void DelteNode(LinkList L, int x) {
    LinkList p = NULL;
    LinkList q = NULL;
    p = GetElem(L, x - 1);
    q = p->next;
    p->next = q->next;
    free(q);

}
void Delete01(LinkList L, int x) {
    LinkList p = NULL;
    if (L == NULL) {
        return;
    }
    if (p->data == x)
    {        
p = L;
        L = L->next;
        free(p);
        Delete01(L, x);
    }
    else {
        Delete01(L->next, x);
    }
}
void DeleteAllx(LinkList L, int x) {
    LinkList q = NULL;
    LinkList temp = NULL;
    LinkList p = NULL;
    q = L;
    p = L->next;
    while (p)
    {
        if (p->data == x) {
            temp = p;
            p = p->next;
            q->next = p;
            free(temp);
        }
        else {
            q = p;
            p = p->next;
        }
    }

}
void PrintL(LinkList p)
{
    p = p->next;
    while (p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
void PrintL_Reverse(LinkList L) {
    int a[10];
    int i = 0;
    L = L->next;
    printf("reverse!\n");
    while (L){
        a[i] = L->data;
        i++;
        L = L->next;
    }
    for (int j = i + 1;j > 0;j--) {
        printf("%d\n", a[j]);
    }

}
int main() {
    Lnode* p = NULL;
    // Lnode *m=NULL;

    p = List_HeadInsert(p);
    PrintL(p);
    // p=List_TailInsert(p);
    // Delete01(p,3);
    // DeleteAllx(p,3);
    PrintL_Reverse(p);
    return 0;
    
}