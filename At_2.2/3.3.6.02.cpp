#include "LinkStack.h"
using namespace std;
void Train_Arrange(char *train){
    char *p=train;
    char *q=train;
    char ch = 0;
    LinkStack s = nullptr;
    InitStack(s);
    while(*p != 0){
        if(*p=='H') {
            Push(s,*p);
        } else{
            *(q++)=*p;
        }
        p++;
    }
    while (!StackEmpty(s))
    {
        Pop(s,ch);
        *(q++)=ch;
    }
    
}
auto main() -> int{
    char train[]="HhhHhHHhHHh";
    char *tr=train;
    Train_Arrange(tr);
    cout<<""<<train<<endl;
}