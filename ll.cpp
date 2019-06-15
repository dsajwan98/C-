#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
struct node *temp;

void insert()
{
    if(temp==0)
    {
        cout<<"Memory not allocated";
    }
    else
   {
    if(head==0)
    {
        cout<<"List is empty";
        head=temp;
        temp->next=0;
        temp->data=3;
    }
    else
        {
         temp->data=3;
         temp->next=head;
           head=temp;
        }

    }
}
int main()
{
  int o;
temp=(struct node *)malloc(sizeof(struct node));
  do{
    cin>>o;
    switch(o)
    {
        case 1:insert();
        break;
    }
  }while(o!=0);
return 1;
}
