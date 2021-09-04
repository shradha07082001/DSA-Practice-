void mirror(struct Node* node) 
{
    if(node==NULL)
    return;
    else
    {
    struct Node* temp;
    mirror(node->left);
    mirror(node->right);
    temp = node->left;
    node->left = node->right;
    node->right = temp;
    }
}
