#include <stdio.h>
#include <stdlib.h>
//归并排序
void Merge(int a[], int low, int mid, int high) {
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
void MergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}
int main() {
    int a[] = {49, 38, 65, 97, 76, 13, 27};
    int low = 0;
    int high = 6;
    MergeSort(a, low, high);
    for (int i = 0; i <= high; i++)
        printf("%d ", a[i]);
}