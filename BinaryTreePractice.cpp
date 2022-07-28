#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    Node* root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    
    return root;
    
}
//preorder printing - root, left, right
void preorder_print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder_print(root->left);
    preorder_print(root->right);
}

//inorder printing - left, root, right
void inorder_print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout<<root->data<<" ";
    inorder_print(root->right);
}

//postorder printing - left, right, root
void postorder_print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder_print(root->left);
    postorder_print(root->right);
    cout<<root->data<<" ";
}

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return 1+max(height(root->left),height(root->right));
}

void printKlevel(Node* root, int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printKlevel(root->left,k-1);
    printKlevel(root->right,k-1);
    return;
}

int main() {
    // your code goes here
    Node* root = buildTree();
    preorder_print(root);
    int h = height(root);
    cout<<"\n";
    cout<<h;
    return 0;
}
