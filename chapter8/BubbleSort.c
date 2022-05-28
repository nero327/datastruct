#include <stdio.h>
//冒泡排序
void BubbleSort(int a[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            return;
    }
}

int main() {
    // int a[] = {6, 5, 4, 3, 2, 1};
    int a[] = {3, 6, 2, 4, 1, 1};
    int n = 6;
    BubbleSort(a, n);
    for (int i = 0; i < n; ++i) {
        printf("%d", a[i]);
    }
}