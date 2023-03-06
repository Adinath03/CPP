#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
node *reverseK(node *&head, int K)
{
    node *preptr = NULL;
    node *currptr = head;
    node *nextptr;

    int count = 0;
    while (currptr != 0 && count < K)
    {
        nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseK(nextptr, K);
    }

    return preptr;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAthead(head, 2);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAthead(head, 7);
    display(head);
    node *newhead = reverseK(head, 4);
    display(newhead);
    return 0;
}