#include<stdio.h>
//第二种直接插入排序
void InsertSort2(int a[],int n){
    int i,j;
    for(i=2;i<n;i++){//将2-n依次插入到已排序列
        if(a[i]<a[i-1]){
            a[0]=a[i];//a[0]为哨兵
            for(j=i-1;a[0]<a[j];--j)//从后往前寻找插入位置
                a[j+1]=a[j];//将当前元素向后挪
            a[j+1]=a[0];//复制到插入位置
        }
        
    }
}
int main(){
    int a[]={4,4,3,2,2,1,9};
    int n=7;
    InsertSort2(a, n);
    for(int i=0;i<n;++i){
        printf("%d\n",a[i]);
    }
}