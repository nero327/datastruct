#include <stdio.h>
//快速排序
int Partition(int a[], int low, int high) {  // a,low,high
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

void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int position = Partition(a, low, high);
        QuickSort(a, low, position - 1);
        QuickSort(a, position + 1, high);
    }
}
int main() {
    int a[] = {4, 2, 1, 5, 6, 3};
    int low = 0;
    int high = 5;
    QuickSort(a, low, high);
    for (int i = 0; i <= high; i++) {
        printf("%d", a[i]);
    }
}