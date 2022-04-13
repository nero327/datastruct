#include<stdio.h>
#include<stdbool.h>
#define MaxSize 100
#define ElemType int
typedef struct
{
    ElemType data[MaxSize];
    int front, rear;
}SqQueue;
void InitQueue(SqQueue* s) {
    s->front = s->rear = 0;
}
bool IsEmpty(SqQueue s) {
    return(s.front == s.rear ? true : false);
}

bool EnQueue(SqQueue* s, ElemType x) {
    if ((s->rear + 1) % MaxSize == s->front) {
        return false;
    }
    s->data[s->rear] = x;
    s->rear = (s->rear + 1) % MaxSize;
    return true;
}

bool DeQueue(SqQueue* s) {
    if (s->rear == s->front) {
        return false;
    }
    s->front = (s->front + 1) % MaxSize;
    return true;
}

int main() {
    SqQueue s;
    SqQueue* p = &s;
    InitQueue(p);
    printf("IsEmpty:%d\n", IsEmpty(s));
    EnQueue(p, 1);
    EnQueue(p, 2);
    EnQueue(p, 3);
    EnQueue(p, 4);
    EnQueue(p, 5);
    printf("IsEmpty:%d\n", IsEmpty(s));
    printf("front:%d\n", s.data[s.front]);
    DeQueue(p);
    DeQueue(p);
    DeQueue(p);
    DeQueue(p);
    printf("front:%d\n", s.data[s.front]);
    DeQueue(p);
    printf("IsEmpty:%d\n", IsEmpty(s));
}