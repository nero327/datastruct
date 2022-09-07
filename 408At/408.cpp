#include<iostream>
using namespace std;
//2010统考
int MoveP(int *a,int b,int p){
    for (int i=0; i<p; i++) {
    int n=a[0];
    for (int j=0; j<b; j++) {
    a[j]=a[j+1];
    }
    a[b-1]=n;
    }
    return 0;
}

//2011统考
int TwoMid(int a[],int b[],int l){
    int mid;
    int m=0;
    int n=0;  
    for (int i=0; i<l; i++) {
        if(a[m]<=b[n]){
            mid=a[m++];
        }
        else {
        mid=b[n++];
        }
    }
    return mid;
}
int main(){
    // 2010统考
    // int r[]={1,2,3,4,5,6};
    // int b=2;
    // cout<<b/2<<endl;
    // MoveP(r,6,3);
    // for(int i=0;i<6;i++){
    //     cout<<r[i]<<endl;
    // }
    // 2011统考
    // int a[]={11,13,15,17,19};
    // int b[]={2,4,6,8,20};
    // int mid=TwoMid(a, b, 5);
    // cout<<mid<<endl;
    //2013统考
    
    return 0;
}
