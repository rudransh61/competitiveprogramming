    bool isBST(Node* root, int num_min = INT_MIN, int num_max = INT_MAX) 
    {
        if( !root ) return true;
        if( !( root->data > num_min && root->data < num_max ) ) return false;
        return isBST( root->left, num_min, root->data ) &
                isBST( root->right, root->data, num_max );
    }