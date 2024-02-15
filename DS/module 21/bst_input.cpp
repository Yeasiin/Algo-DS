#include <iostream>
#include <queue>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";

    preOrder(root->left);
    preOrder(root->right);
}

void insert_bst(TreeNode *&root, int x)
{
    // if root is empty inset it into the root and return
    if (root == NULL)
    {
        root = new TreeNode(x);
        return;
    }

    // if `input` is lessThen root that means it going to left
    if (x < root->val)
    {
        // if left is not empty, have to dig one step / then the else condition will be on trigger and it will say on there
        if (root->left != NULL)
        {
            insert_bst(root->left, x);
        }
        else
        {
            root->left = new TreeNode(x);
        }
    }
    else if (x > root->val) // if `input` is getter then root that means it going to left
    {
        if (root->right != NULL)
        {
            // if right is not empty, have to dig one step / then the else condition will be on trigger and it will say on there
            insert_bst(root->right, x);
        }
        else
        {
            root->right = new TreeNode(x);
        }
    }
}

int main()
{

    TreeNode *root = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_bst(root, x);
    }

    // print in preOrder
    preOrder(root);

    return 0;
}