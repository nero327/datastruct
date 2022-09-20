#include<stdio.h>
#include <sys/types.h>
#define Maxsize 10
typedef struct{
    int data[Maxsize];
    int length;
}SqList;
void InistList(SqList *p){
    p->length=0;
}

int main(){
    SqList L;
    SqList *p=NULL;
    p = &L;
    InistList(p);
    
}