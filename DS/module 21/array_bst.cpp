#include <iostream>
#include <vector>
#include <algorithm>
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
        this->right = NULL;
        this->left = NULL;
    }
};

TreeNode *convert(vector<int> v, int l, int r)
{

    if (r < l)
        return NULL;

    int mid = (l + r) / 2;
    TreeNode *root = new TreeNode(v[mid]);

    TreeNode *leftNode = convert(v, l, mid - 1);
    TreeNode *rightNode = convert(v, mid + 1, r);

    root->left = leftNode;
    root->right = rightNode;

    return root;
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    TreeNode *root = convert(v, 0, v.size() - 1);

    cout << endl;

    queue<TreeNode *> q;

    q.push(root);

    while (!q.empty())
    {
        TreeNode *top = q.front();
        q.pop();

        cout << top->val << " ";

        if (top->left)
        {
            q.push(top->left);
        }

        if (top->right)
        {
            q.push(top->right);
        }
    }

    return 0;
}