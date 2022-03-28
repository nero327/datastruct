#include<stdio.h>
#include <sys/types.h>
#define Maxsize 10
typedef struct{
    int data[Maxsize];
    int length;
    int a;
}SqList;
void InistList(SqList *p){
    p->a=3;
}

int main(){
    SqList L;
    SqList *p=NULL;
    p = &L;
    L.a=1;
    printf("%d\n",L.a);
    InistList(p);
    printf("%d",L.a);
    
}