#include <stdio.h>
//简单选择排序
int *SelectSort(int *a,int l){
  int min=0;
  int n=0;
  int temp;
  for(int i=0;i<l-1;i++){
    min=i;
    for(int j=i;j<l;j++){
      if(a[min]>a[j])
        min=j;
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;

  }
}
int main() {
  int a[] = {6, 5, 4, 3, 2, 1};
  int n = 6;
  SelectSort(a, n);
  for (int i = 0; i < n; i++) {
    printf("%d", a[i]);
  }
}