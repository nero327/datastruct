#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
//排序大全
//选择排序
int *SelectSort(int *a, int l) {
  int temp = 0;
  int min = 0;
  for (int i = 0; i < l - 1; i++) {
    min = i;
    for (int j = i + 1; j < l; j++) {
      if (a[min] > a[j]) {
        min = j;
      }
    }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
  return a;
}

//冒泡排序
int *BubbleSort(int *a, int l) {
  int temp = 0;
  bool flag = true;
  for (int i = 0; i < l - 1; i++) {
    for (int j = 0; j < l - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        flag = false;
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag == true) {
      break;
    }
  }
  return a;
}

//插入排序
int *InsertSort1(int *a, int l) {
  int temp = 0;
  for (int i = 1; i < l; i++) {
    temp = a[i];
    int k = i - 1;
    while (k >= 0 && a[k] > temp) {
      k--;
    }
    for (int j = i; j > k + 1; j--) {
      a[j] = a[j - 1];
    }
    a[k + 1] = temp;
  }
  return a;
}

//希尔排序
int *Shellsort(int *a, int l) {
  int i, j, temp, d;
  for (d = l / 2; d >= 1; d = d / 2) {
    for (i = d; i < l; i++) {
      if (a[i] < a[i - d]) {
        temp = a[i];
        for (j = i - d; j >= 0 && temp < a[j]; j -= d)
          a[j + d] = a[j];
        a[j + d] = temp;
      }
    }
  }
  return a;
}

//归并排序
int Merge(int a[], int low, int mid, int high) {
    int* B = (int*)malloc(sizeof(int) * 7);
    int i, j, k;
    for (int k = low; k <= high; k++) {
        B[k] = a[k];
    }
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
        if (B[i] <= B[j])
            a[k] = B[i++];
        else
            a[k] = B[j++];
    }
    while (i <= mid)
        a[k++] = B[i++];
    while (j <= high)
        a[k++] = B[j++];
    free(B);
}
int *MergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
    return  a;
}

//快排
int QuickSort(int a,int l){
  
  return a;
}
int main() {
  // int a[] = {10, 5, 4, 3, 2, 10};
  int a[] = {10, 20, 3, 4, 5, 6};
  int l = 6;
  int low=0;
  int high=5;
  for (int i = 0; i < l; i++) {
    // printf("%d\n",SelectSort(a, l)[i]);
    // printf("%d\n",InsertSort1(a, l)[i]);
    // printf("%d\n",BubbleSort(a, l)[i]);
    // printf("%d\n", Shellsort(a, l)[i]);
    printf("%d\n", MergeSort(a,low,high)[i]);
  }
}
