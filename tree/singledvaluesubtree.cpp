
class Solution
{
public:
    bool solve(Node *root, int &ct)
    {
        if (root == NULL)
        {
            return 1;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ct++;
            return true;
        }
        bool lt = solve(root->left, ct);
        bool rt = solve(root->right, ct);
        int r = root->data;
        int lt1 = r, rt1 = r;
        if (root->left)
            lt1 = root->left->data;
        if (root->right)
            rt1 = root->right->data;
        if (lt && rt && lt1 == rt1 && lt1 == r)
        {
            ct++;
            return true;
        }
        return false;
    }

    int singlevalued(Node *root)
    {
        int ct = 0;
        solve(root, ct);
        return ct;
    }
};