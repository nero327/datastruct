#include<stdio.h>
v
int main(){
    int a[]={0,6,5,4,3,2,1};
    int n=7;
    HeapSort(a,n);
    for(int i=1;i<n;i++){
        printf("%d",a[i]);
    }
}