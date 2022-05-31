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
int *abc(int *b,int *returnnum){
    // int a[]=returnnum;
    *returnnum=8;
    *(returnnum+1)=9;
    // returnnum=7;
    // returnnum[]={b[0],b[1]}
    return returnnum;
}
void cf(){
    for(int i=1;i<10;i++){
        for(int j=1;j<=i;j++){
            printf("%dX%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
}

bool HuiWen(int a){
    int *b=(int *)malloc(sizeof(int)*10);
    int j=0;
    if(a<0)
    return false;
    if(a=0)
    return true;
    for(int i=a;i>0;i/=10){
        b[j++]=i%10;
    }

    
    if(j%2=0)
        for(int m=o;i<=j/2-1;m++)
            if(b[m]==b[j-1-m])
                return true;
            else
                return false;
    else
        for()
}

int main(){
    int a=0;
    // HuiWen(a);
    a%=2;
    // printf("%d\n",a%10);
    printf("%d\n",a);
}
