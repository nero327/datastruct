#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define InitSize 10
typedef struct 
{
    int *data;
    int MaxSize;
    int Length;
}SqList;

void InitList(SqList *p){
    p->data=(int *)malloc(InitSize*sizeof(int));
    p->Length=0;
    p->MaxSize=InitSize;
}

void IncreaseSize(SqList *p, int len){
    int *temp=p->data;
    p->data=(int *)malloc((InitSize+len)*sizeof(int));
    for(int i =0;i<p->Length;i++){
        p->data[i]=temp[i];
    }
    p->MaxSize=p->MaxSize+len;
    free(temp);
}
bool ListInsert(SqList *p,int i, int e){
    if(i<1||i>p->Length+1)
        return false;
    if(p->Length>=p->MaxSize)
        return false;
    for(int j =p->Length;j>=i;j++)
        p->data[j]=p->data[j-1];
    p->data[i-1]=e;
    p->Length++;
    return true;

}
bool ListDelete(SqList *p,int i,int *p1){
    if(i<1||i>p->Length)
        return false;
        *p1=p->data[i-1];
        for(int j = i;j<p->Length;j++)
        p->data[j-1]=p->data[j];
        p->Length--;
        return true;
}
int LocateElem(SqList *p,int e){
    int m =0;
    for(int i =0;i<p->Length;i++)
        if(p->data[i]==e){
            printf("%d查找成功位于：%d\n",e,i+1);
            m++;}
    if(m==0)
    printf("没找到\n");
    return 0;
}

int main(){
    SqList L;
    SqList *p=&L;
    InitList(p);
    int e =-1;
    int *p1 =&e;
    ListInsert(p,1,5);
    ListInsert(p,2,5);
    ListInsert(p,3,5);
    ListInsert(p,4,5);
    ListInsert(p,5,5);
    ListInsert(p,6,5);
    ListInsert(p,7,5);
    ListInsert(p,8,5);
    printf("%d\n",L.Length);
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    if (ListDelete(p,3,p1)){
        printf("deleted:%d\n",e);
        }
    printf("%d\n",L.Length);
    printf("size:%d\n",L.MaxSize);
    IncreaseSize(p,15);
    LocateElem(p,5);
    printf("size:%d\n",L.MaxSize);
    return 0;
 }
    
