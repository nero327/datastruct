#include<stdio.h>

int *InsertSort(int a[],int l){
    int temp=0;
    int i,j;
    for(i=1;i<l;i++){
        if(a[i]<a[i-1]){
            temp=a[i];
            for(j=i-1;j>=0&&temp<a[j];j--){
                a[j+1]=a[j];
            }
             a[j+1]=temp;
        }
    }
    return a;
}
int main(){
    int a[]={1,6,3,2,1};
    int l=5;
    for(int i=0;i<l;i++){
        printf("%d\n",InsertSort(a,l)[i]);
    }
}