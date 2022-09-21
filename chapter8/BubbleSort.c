#include <stdio.h>
//冒泡排序
void BubbleSort(int a[], int n) {
  int temp = 0;
  int flag = 1;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i; j++) {
      if (a[j] > a[j + 1]) {
        flag = 0;
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag == 1) {
      break;
    }
  }
}

int main() {
  //   int a[] = {6, 5, 4, 3, 2, 1};
  //   int a[] = {2, 3, 4, 5, 6, 1};
  int a[] = {1, 2, 3, 4, 5, 6};
  // int a[] = {2,1,20,6,5,4,10,9,8};
  int n = 6;
  BubbleSort(a, n);
  for (int i = 0; i < n; ++i) {
    printf(" %d", a[i]);
  }
}