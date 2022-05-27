#include <stdio.h>
#define ElemType int
//第一种直接插入排序
void InsertSort(ElemType a[], int n) {
    int i, j, temp;            //中间变量
    for (i = 1; i < n; i++) {  //从1到n依次插入
        if (a[i] < a[i - 1]) {
            temp = a[i];
            for (j = i - 1;j>=0&&a[j] > temp; j--)
                a[j + 1] = a[j];
            a[j + 1] = temp;
        }
    }
}
int main() {
    int a[] = {1, 5, 0, 3, 2, 1, 8, 2, 1, 9, 4};
    int n = 11;
    InsertSort(a, n);
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
}