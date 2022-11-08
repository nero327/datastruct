#include<stdio.h>

int *BubbleSort(int *a,int l){
  for (int i=0;i<l-1;i++){
    int flag=0;
    for (int j=0;j<l-i-1;j++){
      printf("%dhaha\n",j);
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
      }
    }
    if(flag==0)
      return a;
  }
  return a;
}
int main(){
  int a[]={5,3,2,1,5,1};
  // int a[]={1,2,3,4,5,6};
  int l=6;
  int *b=BubbleSort(a,l);
  for (int i=0;i<l;i++){
    printf("%d\n",b[i]);
  }
}