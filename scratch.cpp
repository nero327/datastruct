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
    cout<<""<<a.ch<<endl;
}