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
//折半插入排序
int *InsertSort_mid(int a[], int n) {
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
    return 0;
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
int Partition(int a[], int low, int high) {
    int pivot = a[low];
    while (low < high) {
        while (low < high && a[high] >= pivot)
            high--;
        a[low] = a[high];
        while (low < high && a[low] <= pivot)
            low++;
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}

int *QuickSort(int a[], int low, int high) {
    if (low < high) {
        // printf("year!");
        int position = Partition(a, low, high);
        QuickSort(a, low, position - 1);
        QuickSort(a, position + 1, high);
    }
    return a;
}
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

int *HeapSort(int a[],int len){
    BuildMaxHeap(a,len);
    int temp;
    for(int i=len;i>1;i--){
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        HeadAdjust(a,1,i-1);
    }
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
    // printf("%d\n", MergeSort(a,low,high)[i]);
    // printf("%d\n", QuickSort(a,low,high)[i]);
    // printf("%d\n", HeapSort(a,l)[i]);
    printf("%d\n", InsertSort_mid(a,l)[i]);
  }
}
