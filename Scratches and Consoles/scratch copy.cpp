#include<iostream>
using namespace std;
struct scratch
{
    char *ch;
};
int MoveP(int *a,int b,int p){
    for (int i=0; i<p; i++) {
    int n=a[0];
    for (int j=0; j<b; j++) {
    a[j]=a[j+1];
    }
    a[b-1]=n;
    }
    // return a;
}
int main(){
    scratch a;
    int r[]={1,2,3,4,5,6};
    int b=2;
    cout<<""<<b/2<<endl;
    MoveP(r,6,3);
    for(int i=0;i<6;i++){
        cout<<""<<r[i]<<endl;
    }
}