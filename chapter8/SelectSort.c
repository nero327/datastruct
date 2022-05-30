#include<stdio.h>
//简单选择排序
void SelectSort(int a[],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
            if(min!=i){
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
    }
}

int main(){
    int a[]={6,5,4,3,2,1};
    int n=6;
    SelectSort(a,n);
    for(int i= 0;i<n;i++){
        printf("%d",a[i]);
    }
}