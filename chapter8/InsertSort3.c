#include <stdio.h>
//折半插入排序
void InsertSort_mid(int a[], int n) {
    int i, j, low, high, mid, temp;
    for(i = 1;i<n;i++){
        if(a[i]<a[i-1]){
        temp=a[i];//暂存a[i]
        low=0;
        high=i-1;
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]>temp)
                high=mid-1;
            else
                low=mid+1;
        }
        for(j=i-1;j>=high+1;j--){
            a[j+1]=a[j];
        }
        a[high+1]=temp;
        }        
    }
}
int main(){
    int a[]={6,5,4,3,2,1};
    // int a[]={1,2,3,4,5,6};
    int n=6;
    InsertSort_mid(a,n);
    for(int i=0;i<n;++i){
        printf("%d",a[i]);
    }
}