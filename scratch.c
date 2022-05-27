#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct scratch
{
    char ch;
}str;
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
int qwe(char *n){
    char *p=n;
    char *q=n;
    // *p=111;
    p++;
    p++;
    q++;
    *p='1';
    *q='1';
    // *(q++)=*p;
    // *(q)=*p;˜
    // *(q++)=*p;
    // *(p++)=*q;

}

int main(){
    str a;
    char aq[]="fafafafafafafa";
    a.ch=*aq;
    // cout<<""<<ch<<endl;
    // printf("%s",&a.ch);
    int b=1;
    int i;
    int c[]={2};
    for( i=1;i<2;i++)
        printf("%d",i);    
    printf("%d",i);    
    
    // printf("%d",--b);    
    // printf("%d",b);    
}
