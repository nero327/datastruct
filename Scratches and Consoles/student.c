#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
    int id;
    char name;
    int grade;
    struct node *next;
}Lnode,*LinkList;

LinkList List_HeadInsert(LinkList Head){
    Lnode *s;
    Lnode *h;§7
    int x;
    char name;
    int grade;
    Head=(LinkList)malloc(sizeof(Lnode));
    Head->next=NULL;
    h=Head;
    scanf("%d",&x);
    while (x!=888)
    {   
    
        scanf("%c",&name);
        scanf("%d",&grade);
        s=(LinkList)malloc(sizeof(Lnode));
        s->id=x;
        s->name=name;
        s->grade=grade;
        s->next=h->next;
        h->next=s;
        scanf("%d",&x);
    }
    return Head;
}
int main(){
    Lnode *p=NULL;
    // Lnode *m=NULL;

    p=List_HeadInsert(p);
    // p=List_TailInsert(p);
    while(p)
    {
        p=p->next;
        printf("学号：%d\n",p->id);
        printf("姓名：%c\n",p->name);
        printf("成绩：%d\n",p->grade);
    }
} 
