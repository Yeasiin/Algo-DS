#include <bits/stdc++.h>

using namespace std;

const int N = 105;

vector<int> v[N];
int dist_src[N];
int dist_des[N];

bool vis[N];

void reset_vis(int n, int flag)
{
    for (int i = 0; i < n; i++)
    {
        vis[i] = false;
        if (flag == 0)
        {
            dist_src[i] = -1;
        }
        else
        {
            dist_des[i] = -1;
        }
    }
}

void bfs(int src, int flag)
{

    queue<int> q;
    vis[src] = true;
    q.push(src);

    if (flag == 0)
    {
        dist_src[src] = 0;
    }
    else
    {
        dist_des[src] = 0;
    }

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {

            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);

                if (flag == 0)
                {
                    dist_src[child] = dist_src[par] + 1;
                }
                else
                {
                    dist_des[child] = dist_des[par] + 1;
                }
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;

    for (int tt = 1; tt <= t; tt++)
    {
        int n, e;
        cin >> n >> e;

        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;

            v[a].push_back(b);
            v[b].push_back(a);
        }
        int s, d;
        cin >> s >> d;
        reset_vis(n, 0);
        bfs(s, 0);
        reset_vis(n, 1);
        bfs(d, 1);

        int result = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            result = max(result, dist_src[i] + dist_des[i]);
            // cout <<  << endl;
        }

        cout << "Case " << tt << ": " << result << endl;

        for (int i = 0; i < n; i++)
        {
            v[i].clear();
            // cout <<  << endl;
        }
    }

    return 0;
}