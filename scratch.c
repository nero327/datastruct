#include<stdio.h>
#include<stdlib.h>
typedef struct node2
{
    int a;
    struct node2 *next;
}node,*ptrnode;
int main(){
    node x;
    node y;
    node z;
    x.a=1;
    ptrnode p =&x;
    p->next=&y;
    y.a =2;
    y.next=&z;
    z.a=3;
    z.next=NULL;
    while (p)
    {
        printf("%d",p->a);
        p=p->next;
    }
    
}
