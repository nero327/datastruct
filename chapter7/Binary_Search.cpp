#include "iostream"
#include "cstring"
#define Maxsize 100
struct SeqList {
    int elem[Maxsize];
    int TableLen;
};
int Binary_Search(SeqList L,int key){
    int low=0;
    int mid;
    int high=L.TableLen-1;
    while(low<=high){
        mid=(low+high)/2;
        if(L.elem[mid]==key)
            return mid;
        else if(L.elem[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int key;
    SeqList L;
    int length=10;
    // for (int i = 0; i < 10; i++) {
    //     L.elem[i]=i+1;
    // }
    L.elem[0]=1;
    L.elem[1]=5;
    L.elem[2]=6;
    L.elem[3]=11;
    L.elem[4]=15;
    L.elem[5]=16;
    L.elem[6]=17;
    L.elem[7]=22;
    L.elem[8]=23;
    L.elem[9]=40;
    L.TableLen=length;
    printf("%d",Binary_Search(L,40));
}