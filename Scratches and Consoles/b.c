#include<stdio.h>
int main(){
    int a = 100;
    int b[2]={1,2};
    int *p1=nullptr;
    int **p2=nullptr;
    int ***p3=nullptr;
    p1 = &a;
    p2 = &p1;
    p3 = &p2;
    p3 = &a;

    printf("%p\n",&a);
    printf("%p\n",p1);
    printf("%p\n",p2);
    printf("%p\n",*p2);
    printf("%d\n",**p2);
    printf("%p\n",p3);
    printf("%p\n",*p3);
    printf("%p\n",**p3);
    printf("%d\n",***p3);

    

}