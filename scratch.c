#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool equal(int a,int b){
    return (a==b? true:false);
}
char gg[100];
char *rr(char str[]){
    gg[0]='1';
    gg[1]='1';
    gg[2]='1';
    return gg;

}
int main(){
    char x[]="5";
    // char str[]="66666";
    char str[]={'6','5','7'};
    // int i=0;
    // for ( i = 0; i < x/2;i++)
    // {
    //     printf("%d\n",i);
    // }
     
    //     printf("%d\n",i);
    //     printf("%d\n",x/2);
    //     printf("%d\n",15%10);
        // printf("%d\n",x=="[0_9]");
    printf("%s",rr(str));    
}
