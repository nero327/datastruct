#include <cstdio>
#include <iostream>
#include <stdexcept>
using namespace std;
typedef struct {
    char* ch;
    int length;
} SString;
int StrLength(SString S){
    int i=0;
    while (S.ch[i]!='\0')
    {   
        i++;
    }
    return i;
}
int Index(SString S, SString T) {
    int i = 1;
    int j = 1;
    while (i <= S.length && j <= T.length) {
        if (S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        } else {
            i = i - j + 2;
            j = 1;
        }
    }
    if (j > T.length) {
        return i - T.length;
    } else {
        return 0;
    }
}
bool SubString(SString& Sub, SString s, int pos, int len) {
    if (pos + len - 1 > s.length) {
        return false;
    }
    for (int i = pos; i < pos + len; i++) {
        Sub.ch[i - pos + 1] = s.ch[i];
    }
    Sub.length = len;
    return true;
}
int StrCompare(SString S, SString T) {
    for (int i = 0; i < S.length && i < T.length; i++) {
        if (S.ch[i] != T.ch[i])
            return S.ch[i] - T.ch[i];
    }
    return S.length - T.length;
}

int main() {
    SString s, t, m;
    char b[] = "abcde";
    char a[] = "abcdeff";
    s.ch = b;
    s.length = 5;
    t.length = 7;
    t.ch = a;
    // SubString(m, s, 3, 9);
    cout << "" << s.ch[0] << endl;
    cout << "" << t.ch[0] << endl;
    cout << "Length:" << StrLength(t) << endl;
    cout << "" << StrCompare(s,t) << endl;
    // cout << "" << m.ch << endl;
    cout << "" << Index(s, t) << endl;
}