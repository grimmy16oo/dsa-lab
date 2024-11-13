#include<iostream>
using namespace std;
class tree
{
public:
    int data;
    tree *left;
    tree *right;

    tree(int x)     //constructor
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void preorder(tree *root)
{
    if(root == NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(tree *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(tree *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);

    cout<<"Pre-order Traversal: ";
    preorder(root);
    cout<<endl;

    cout<<"In-order Traversal: ";
    inorder(root);
    cout<<endl;

    cout<<"Post-order Traversal: ";
    postorder(root);
    cout<<endl;

    return 0;
}

//       1
//     /   \
//    2     3
//   / \   / \
//  4   5 6   7
