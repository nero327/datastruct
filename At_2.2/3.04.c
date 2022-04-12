#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    char data;
    struct node *next;
}Lnode,*LinkList;

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
//判断链表元素是否对称
bool IsOvO(LinkList L,int x){
    int i=x;
    int j=0;
    L=L->next;
    char s[i/2];
    for ( j = 0; j < i/2; j++)
    {
        s[j]=L->data;
        L=L->next;
    }
    j--;
    if(i%2==1){
        L=L->next;
    }
    while (L&&s[j]==L->data)
    {
        j--;
        L=L->next;
    }
    return(j==-1? true:false);
    
}
int LinkLength(LinkList L){
    int x=0;
    L=L->next;
    while (L)
    {
        x++;
        L=L->next;
    }
    return x;
    
}
int main(){
    LinkList L =NULL;
    LinkList p =NULL;
    int x=0;
    p=List_HeadInsert(L);
    x=LinkLength(p);
    printf("%d\n",x);   
    printf("%d\n",IsOvO(p,x));   
}