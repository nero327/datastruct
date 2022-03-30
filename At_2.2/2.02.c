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
//将顺序表所有元素逆置空间复杂度为O(1)
bool Reverse_List(SqList *p){
    int temp =0;
    for(int i =0;i<p->Length/2;i++){
        temp = p->data[i];
        p->data[i]=p->data[p->Length-1-i];
        p->data[p->Length-1-i]=temp;
    }
} 
// 删除L中所有为x的元素T=n，O=1；
bool ListDelete_Elem(SqList *p,int x){
    if(p->Length==0)
        return false;
    int k =0;
    for(int i =0;i<p->Length;i++){
        if(p->data[i]!=x){
            p->data[k]=p->data[i];
            k++;
        }
    }
    p->Length=k;
    return true;
}
// 删除有序表在s与t之间的元素
bool ListDelete_Btw(SqList *p,int s,int t){
    if(s>=t||p->Length==0)  
    return false;
    int k =0;
    for(int i =0;i<p->Length;i++){
        if(p->data[i]<=s||p->data[i]>=t){
            p->data[k]=p->data[i];
            k++;
        }
    }
    p->Length=k;
    return true;
}
// 删除有序表相同元素
bool ListDelet_Same(SqList *p){
    if(p->Length==0)
    return false;
    int k=0;
    for(int i =0;i<p->Length;i++){
        if(p->data[i]!=p->data[i+1]){
            p->data[k]=p->data[i];
            k++;
        }
    }
    p->Length=k;
    return true;
}
int main(){
    SqList L;
    SqList *p=&L;
    InitList(p);
    int e =-1;
    int *p1 =&e;
    ListInsert(p,1,1);
    ListInsert(p,2,2);
    ListInsert(p,3,3);
    ListInsert(p,4,3);
    ListInsert(p,5,3);
    ListInsert(p,6,6);
    ListInsert(p,7,7);
    // ListDelete_Elem(p,4);
    // ListDelete_Btw(p, 2, 6);
    ListDelet_Same(p);
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    printf("\n");
    Reverse_List(p);
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    printf("\n");
    if( Del_Min(p,p1))
    printf("%d",e);
    for(int i= 0;i<L.Length;i++)
        printf("data[%d]:%d\n",i,L.data[i]);
    return 0;
 }

