#include <stdio.h>
//简单选择排序
void SelectSort(int a[], int n) {
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (a[min] > a[j]) {
        min=j;
      }
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