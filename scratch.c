#include<stdio.h>
#include<stdlib.h>
typedef struct node2
{
    int a;
    struct node2 *next;
}node,*ptrnode;
void Initlist(ptrnode L){
    L=(ptrnode)malloc(sizeof(node));
    L->next=NULL;
}
int main(){
    Initlist(L);
    
}
