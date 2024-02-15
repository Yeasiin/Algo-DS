#include <iostream>
#include <queue>
#include <cmath>

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

    queue<TreeNode *> q;
    int x;

    cin >> x;

    TreeNode *root = NULL;

    if (x != -1)
    {
        root = new TreeNode(x);
    }

    if (root)
    {
        q.push(root);
    }

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
        {
            rightNode = new TreeNode(r);
        }

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
        pq.push({root, 1});
    }
    int cntNode = 0;
    int cntLevel = 0;

    while (!pq.empty())
    {
        pair<TreeNode *, int> top = pq.front();
        pq.pop();

        TreeNode *node = top.first;
        int level = top.second;
        cntNode++;
        cntLevel = level;

        // cout << node->val << " " << level << endl;

        if (node->left)
            pq.push({node->left, level + 1});

        if (node->right)
            pq.push({node->right, level + 1});
    }

    int shouldBe = pow(2, cntLevel) - 1;

    if (cntNode == shouldBe)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}