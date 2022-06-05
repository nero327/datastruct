#include<iostream>
using namespace std;
struct scratch
{
    char *ch;
};

int main(){
    scratch a;
    char b[]="fafafaf";
    a.ch=b;
    char *p=b;
    cout<<(*(p+1))<<endl;
    int c = 1;
    // if (c == 1 && c < 0) {
    //     cout << "haha" << endl;
    // }
    // cout<<""<<a.ch<<endl;
}