#include <stdio.h>
//快速排序
int Partition(int a[], int low, int high) { // a,low,high
  int pivod = a[low];
  while (low < high) {
    while (low < high && a[high] >= pivod) {
      high--;
    }
    a[low] = a[high];
    while (low < high && a[low] <= pivod) {
      low++;
    }
    a[high] = a[low];
  }
  a[low]=pivod;
  return low;
}

void QuickSort(int a[], int low, int high) {
  if (low < high) {
    int position = Partition(a, low, high);
    QuickSort(a, low, position - 1);
    QuickSort(a, position + 1, high);
  }
}
int main() {
  // int a[] = {4, 2, 1, 5, 6, 3};
  // int a[]={21,25,5,17,9,23,30};
  // int a[]={25,23,30,17,21,5,9};
  // int a[]={21,9,17,30,25,23,5};
  int a[] = {5, 9, 17, 21, 23, 25, 30};
  int low = 0;
  int high = 6;
  QuickSort(a, low, high);
  for (int i = 0; i <= high; i++) {
    printf(" %d", a[i]);
  }
}