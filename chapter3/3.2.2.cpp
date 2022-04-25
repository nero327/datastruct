#include <asm-generic/errno-base.h>
#include<cstdbool>
#include<iostream>
#include<cstdlib>
using namespace std;
#define ElemType int
typedef struct Linknode
{
    ElemType data;
    struct Linknode* next;
}LinkNode;
using LinkQueue = struct
{
    LinkNode* front, * rear;
};

void InitLinkQueue(LinkQueue& s) {
    s.front = s.rear = (LinkNode*)malloc(sizeof(LinkNode));
    s.front->next = s.rear->next = nullptr;
}

auto IsEmpty(LinkQueue s)->bool {
    return(s.front == s.rear);
}

void EnQueue(LinkQueue& s, ElemType x) {
    auto *p = (LinkNode*)malloc(sizeof(LinkNode));
    p->data = x;
    p->next = nullptr;
    s.rear->next = p;
    s.rear = p;
}

auto DeQueue(LinkQueue& s) -> bool {
    if (s.rear == s.front) {
        return false;
    }
    LinkNode* p;
    p = s.front->next;
    s.front->next = p->next;
    if (s.rear == p)
        s.rear = s.front;
    free(p);
    return true;
}
auto main() -> int {
    LinkQueue s;
    InitLinkQueue(s);
    EnQueue(s, 1);
    cout << "Empty:" << IsEmpty(s) << endl;
    DeQueue(s);
    cout << "Empty:" << IsEmpty(s) << endl;
}

