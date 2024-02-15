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

int main()
{
    int n;
    TreeNode *root = NULL;
    queue<TreeNode *> q;

    cin >> n;

    if (n != -1)
    {
        root = new TreeNode(n);
    }

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        TreeNode *top = q.front();
        q.pop();

        TreeNode *leftNode = NULL;
        TreeNode *rightNode = NULL;

        int l, r;

        cin >> l >> r;

        if (l != -1)
            leftNode = new TreeNode(l);

        if (r != -1)
            rightNode = new TreeNode(r);

        top->left = leftNode;
        top->right = rightNode;

        if (top->left)
            q.push(leftNode);

        if (top->right)
            q.push(rightNode);
    }

    queue<pair<TreeNode *, int>> pq;
    if (root)
    {
        pq.push({root, 0});
    }

    int inputLevel;

    cin >> inputLevel;

    int flagCnt = 0;

    while (!pq.empty())
    {

        pair<TreeNode *, int> top = pq.front();
        pq.pop();

        TreeNode *node = top.first;
        int level = top.second;

        if (inputLevel == level)
        {
            cout << node->val << " ";
        }
        flagCnt = level;

        if (node->left)
            pq.push({node->left, level + 1});

        if (node->right)
            pq.push({node->right, level + 1});
    }

    if (flagCnt < inputLevel)
    {
        cout << "Invalid";
    }

    return 0;
}
