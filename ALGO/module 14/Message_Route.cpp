#include <bits/stdc++.h>

using namespace std;

#define pi pair<int, int>

const int N = 1e5 + 5;
vector<int> v[N];
int vis[N];
int par[N];

vector<int> ans;

void bfs(int src)
{
    queue<int> pq;
    pq.push(src);
    vis[src] = true;

    while (!pq.empty())
    {
        int top = pq.front();
        pq.pop();

        for (int child : v[top])
        {
            if (!vis[child])
            {
                par[child] = top;
                vis[child] = true;
                pq.push(child);
            }
        }
    }
}

int main()
{
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs(1);

    int x = n;

    vector<int> vc;
    while (x != -1)
    {
        vc.push_back(x);
        x = par[x];
    }

    reverse(vc.begin(), vc.end());

    if (vis[n])
    {
        cout << vc.size() << endl;
        for (int e : vc)
        {
            cout << e << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}