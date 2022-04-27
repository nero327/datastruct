#include <cstdio>
#include <iostream>
#include <stdexcept>
using namespace std;
typedef struct {
    char* ch;
    int length;
} SString;
void get_next(SString T,int next[]) {
    int i = 1;
    int j = 0;
    next[1] = 0;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
    // return next;
    // for(int m=1;m<=i;m++)
    // cout<<next[m]<<endl;
}
int Index_KMP(SString S, SString T, int next[]) {
    int i = 1;
    int j = 1;
    while (i < S.length && j <= T.length) {
        if (j == 0 || S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        } else {
            j = next[j];
        }
    }
    if (j > T.length)
        return i - T.length;
    else
        return 0;
}
int main(){
    SString S,T;
    char a[] = "#abceeea";
    char b[] = "#ababceeea";
    T.ch = a;
    T.length = 7;
    S.length = 10;
    S.ch = b;
    // int next[]={};
    int next[100]={};
    get_next(T,next);
    cout<<Index_KMP(S,T,next)<<endl;
    for(int m=1;m<=T.length;m++)
    cout<<next[m];
}