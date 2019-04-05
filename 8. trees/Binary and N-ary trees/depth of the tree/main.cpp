#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int depth(struct node* node)
{
    if(node == NULL)
    {
        return 0;
    }
    else
    {
        int ldepth = depth(node->left);
        int rdepth = depth(node->right);
        if(ldepth > rdepth)
            return ldepth+1;
        else
            return rdepth+1;
    }
}
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(3);
    root->left->left = newNode(5);
    root->right = newNode(10);
    root->right->right = newNode(33);
    root->right->right->right = newNode(23);

    cout << depth(root);

}
