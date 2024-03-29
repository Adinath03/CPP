#include<iostream>
using namespace std;

class node
{
    public:
    int data;
     node* next;

     node(int val)
     {
        data = val;
        next=NULL;
     }
};

void insertattail(node* &head,int val)
{
    node* n = new node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertathead(node* &head,int val)
{
    node*n = new node(val);
    n->next = head;
    head = n;
}
void evenafterodd(node* &head)
{
    node* odd = head;
    node* even = head->next;
    node*evenstart= even;
    while (odd->next!=NULL&&even->next!=NULL)
    {
        odd->next= even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next= evenstart;
    if (odd->next!=NULL)
    {
        even->next=NULL;
    }
    
}
void display(node* head)
{
    node*temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main ()
{
    node* head = NULL;
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertathead(head,1);
    display(head);
    evenafterodd(head);
    display(head);
}