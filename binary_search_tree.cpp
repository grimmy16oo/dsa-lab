#include <iostream>
using namespace std;

class BST
{
public:
    int data;
    BST *left;
    BST *right;

    BST(int x) // constructor
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

BST *Insert(BST *root, int x)
{
    if (root == NULL)
        return new BST(x);

    if (x < root->data)
        root->left = Insert(root->left, x); // Insert in left subtree
    else
        root->right = Insert(root->right, x); // Insert in right subtree

    return root;
}

bool search(BST *root, int x)
{
    if (root == NULL)
        return false; 

    if (root->data == x)
        return true;
    else if (x < root->data)
        return search(root->left, x); // Search in left subtree
    else
        return search(root->right, x); // Search in right subtree
}

void inorder(BST *root)
{
    if (root == NULL)
        return; 

    inorder(root->left);
    cout << root->data << " "; 
    inorder(root->right);
}

int main()
{
    BST *root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 7);
    root = Insert(root, 2);
    root = Insert(root, 18);
    root = Insert(root, 9);

    cout << "In-order BST traversal: ";
    inorder(root);
    cout << endl;

    if (search(root, 18))
        cout << "Item found" << endl;
    else
        cout << "Not found" << endl;

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1000;
// int tree[N];

// void insert(int i, int x)
// {
//     if (tree[i] == -1)
//         tree[i] = x;
//     else if (x < tree[i])
//         insert(2 * i + 1, x);
//     else
//         insert(2 * i + 2, x);
// }

// void inorder(int i)
// {
//     if (tree[i] == -1)
//         return;             // No node at this index
//     inorder(2 * i + 1);     
//     cout << tree[i] << " "; 
//     inorder(2 * i + 2);     
// }

// int main()
// {
//     fill(tree, tree+N, -1); // Initialize all positions to -1

//     int n, x;
//     cout << "Enter number of nodes: ";
//     cin >> n;
//     cout << "Enter nodes: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         insert(0, x); 
//     }

//     cout << "In-order Traversal: ";
//     inorder(0); 
//     cout << endl;

//     return 0;
// }

