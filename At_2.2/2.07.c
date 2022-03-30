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
//查找元素
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
//删除最小值并用最后元素填充
bool Del_Min(SqList *p ,int *Min){
    if(p->Length==0){
    return false;
    }
    *Min = p->data[0];
    int tem =0;
    for(int i =0;i<p->Length;i++){
        if(p->data[i]<*Min){
            *Min = p->data[i];
            tem =i;
        }
    }
        p->data[tem]= p->data[p->Length-1];
        p->Length--;
        return true;
}
// 合并两个顺序表
bool ListMerge(SqList *p,SqList *p2,SqList *p3){
    if(p->Length==0||p2->Length==0)
        

}
int main(){
    SqList L;
    SqList M;
    SqList J;
    SqList *p=&L;
    SqList *p2=&M;
    SqList *p3=&J;
    InitList(p);
    InitList(p2);
    int e =-1;
    int *p1 =&e;
    ListInsert(p,1,3);
    ListInsert(p,2,4);
    ListInsert(p,3,0);
    ListInsert(p,4,1);
    ListInsert(p2,1,3);
    ListInsert(p2,2,4);
    ListInsert(p2,3,0);
    ListInsert(p2,4,1);
    ListMerge(p, p2, p3);
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    printf("\n");
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    return 0;
 }

