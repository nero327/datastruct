#include<stdio.h>
void ShellSort(int a[],int n){
    int i, j, temp, d;
    for(d=n/2;d>=1;d=d/2){
        for(i=d;i<=n;i++){
            if(a[i]<a[i-d]){
                temp=a[i];
                for(j=i-d;j>=0&&temp<a[j];j-=d)
                    a[j+d]=a[j];
                a[j+d]=temp;
            }
        }
    }
}
int main(){
    int a[]={6,5,4,3,2,1};
    int n=6;
    ShellSort(a,n);
    for(int i =0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n%d",a[1]);
}