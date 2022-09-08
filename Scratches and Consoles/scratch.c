#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct scratch {
    char ch;
} str;
bool equal(int a, int b) {
    return (a == b ? true : false);
}
char gg[100];
char* rr(char str[]) {
    gg[0] = '1';
    gg[1] = '1';
    gg[2] = '1';
    return gg;
}
int qwe(char* n) {
    char* p = n;
    char* q = n;
    // *p=111;
    p++;
    p++;
    q++;
    *p = '1';
    *q = '1';
    // *(q++)=*p;
    // *(q)=*p;˜
    // *(q++)=*p;
    // *(p++)=*q;
}
int* abc(int* b, int* returnnum) {
    // int a[]=returnnum;
    *returnnum = 8;
    *(returnnum + 1) = 9;
    // returnnum=7;
    // returnnum[]={b[0],b[1]}
    return returnnum;
}
void cf() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%dX%d=%d ", j, i, i * j);
        }
        printf("\n");
    }
}

bool HuiWen(int a){
    int* b = (int*)malloc(sizeof(int) * 10);
    int j = 0;
    if (a < 0)
        return false;
    for (int i = a; i > 0; i /= 10) {
        b[j++] = i % 10;
    }
    j--;
    for (int m = 0, n = j; m <= n; m++, n--) {
        if (b[m] != b[n])
            return false;
    }
    return true;
}
bool makesquare(int* matchsticks) {
    int length = sizeof(matchsticks) / 4;
    if (length < 4) {
        return false;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + matchsticks[i];
    }
    if (sum % 4 != 0) {
        return false;
    }
    int b = sum / 4;
    for (int j = 0; j < length; j++) {
        if (matchsticks[j] > b)
            return false;
    }
    return true;
}

int main() {
    int a[11]={1};
    for(int k=0;k<=10;k++){
        a[k]+=32;
    }
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);

    
}
