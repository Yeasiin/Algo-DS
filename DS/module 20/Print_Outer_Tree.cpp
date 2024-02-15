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

void printPostOrder(TreeNode *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        printPostOrder(root->left);
    }
    else
    {
        printPostOrder(root->right);
    }

    cout << root->val << " ";
}

void printPreOrder(TreeNode *root)
{

    if (root == NULL)
        return;

    cout << root->val << " ";

    if (root->right)
    {
        printPreOrder(root->right);
    }
    else
    {
        printPreOrder(root->left);
    }
}

int main()
{

    queue<TreeNode *> q;
    int n;

    cin >> n;
    TreeNode *root = NULL;
    if (n != -1)
        root = new TreeNode(n);

    if (root)
        q.push(root);

    while (!q.empty())
    {
        TreeNode *top = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        TreeNode *leftNode = NULL;
        TreeNode *rightNode = NULL;

        if (l != -1)
        {
            leftNode = new TreeNode(l);
        }

        if (r != -1)
            rightNode = new TreeNode(r);

        top->left = leftNode;
        top->right = rightNode;

        if (top->left)
            q.push(leftNode);

        if (top->right)
            q.push(rightNode);
    }

    printPostOrder(root->left);

    cout << root->val << " ";

    printPreOrder(root->right);

    return 0;
}