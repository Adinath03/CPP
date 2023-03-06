#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node*n = new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=n;
}
void insertathead(node* &head,int val)
{
    node*n =new node(val);
    n->next=head;
    head=n;
}
void display(node* head)
{
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int length(node* head)
{
    int l = 0;
    node*temp = head;
    while (temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}
node* kappend(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail=head;

    int l = length(head);
    k=k%l;
    int count = 1;
    while (tail->next!=NULL)
    {
        if (count==l-k)
        {
            newtail=tail;
        }
        if (count==l-k+1)
        {
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main()
{
    int arr[]={1,2,3,4,5,6,5,7,15};
    node*head = NULL;
    for (int i = 0; i <9; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node*newhead = kappend(head,4);
    display(newhead);
}