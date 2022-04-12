#include <stdbool.h>
#include<stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef struct 
{
    int stack[MaxSize];
    int top[2]; 
}stk;
stk s;
bool Push(int i,int x){
    if(i<0||i>1){
        printf("栈号不对");
        exit(0);
    }
    if(s.top[1]-s.top[0]==1){
        printf("栈已满");
        return false;
    }
    switch(i){
        case 0:
        s.stack[++s.top[0]]=x;return true;break;
        case 1:
        s.stack[--s.top[1]]=x;return true;
    }
bool Pop(int i){
    if(i<0||i>1){
        printf("栈号不对");
        exit(0);
    }
    switch (i){
        case 0:
        if(s.top[0]==-1){
            return false;

        }
        else
        return s.stack[s.top[0]--];
        break;
        case 1:
        if(s.top[1]==MaxSize){
            return false;

        }
        else
        return s.stack[s.top[1]++];
        break;
    }
}
}
