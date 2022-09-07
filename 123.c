#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* createlist(){
struct node* headnode=(struct node*)malloc(sizeof(struct node));  
headnode->next=NULL;
return headnode;
}
struct node*createnode(int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode; 
}
void printlist(struct node* headnode)
{
  struct node* pmove=headnode->next;
  while(pmove)
  {
      printf("%d\n",pmove->data);
      pmove=pmove->next;
  }
}
void insertnodebyhead(struct node* headnode ,int data)
{
   struct node* newnode=createnode(data);
   newnode->next=headnode->next;
   headnode->next=newnode;
}

int main() { 
    struct node* list=createlist();
    insertnodebyhead(list,1);
    insertnodebyhead(list,2);
    insertnodebyhead(list,3);
    printlist(list);
}
