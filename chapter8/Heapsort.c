#include<stdio.h>
//堆排序
void HeadAdjust(int a[],int k,int len){
    a[0]=a[k];
    for(int i=2*k;i<=len;i*=2){
        if(i<len&&a[i]<a[i+1]){
            i++;
        }
        if(a[0]>=a[i]){
            break;
        }
        else{
            a[k]=a[i];
            k=i;
        }
    }
    a[k]=a[0];
}

void BuildMaxHeap(int a[],int len){
    for(int i=len/2;i>0;i--){
        HeadAdjust(a,i,len);
    }
}

void HeapSort(int a[],int len){
    BuildMaxHeap(a,len);
    int temp;
    for(int i=len;i>1;i--){
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        HeadAdjust(a,1,i-1);
    }
}

int main(){
    int a[]={0,6,5,4,3,2,1};
    int n=7;
    HeapSort(a,n);
    for(int i=1;i<n;i++){
        printf("%d",a[i]);
    }
}