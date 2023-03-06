#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    Node(int val)
    {
        data= val;
        right = NULL;
        left = NULL;
    }
};
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
}
