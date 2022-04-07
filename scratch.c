#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool equal(int a,int b){
    return (a==b? true:false);
}
int main(){
    int a=1;
    int b=0;
    b=--a;
    printf("%d",b);
    a=1;
    b=a--;
    printf("%d",b);
    printf("%d",a);
    
}
