#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector<pair<ll, ll>> nodes[N];
ll dist[N];
ll par[N];

class Comp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Comp> pq;

    pq.push({src, 0});
    dist[src] = 0;

    while (!pq.empty())
    {
        ll child = pq.top().first;
        ll cost = pq.top().second;
        pq.pop();

        for (auto each : nodes[child])
        {
            ll childNode = each.first;
            ll childCost = each.second;
            long long newCost = childCost + cost;

            if (dist[childNode] > newCost)
            {
                par[childNode] = child;
                dist[childNode] = newCost;
                pq.push({childNode, newCost});
            }
        }
    }
};

int main()
{
    ll n, e;
    cin >> n >> e;

    for (ll i = 1; i <= e; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        nodes[a].push_back({b, c});
        nodes[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        par[i] = -1;
        dist[i] = 1e18;
    }

    dijkstra(1);

    if (dist[n] == 1e18)
    {
        cout << -1;
        return 0;
    }
    else
    {

        vector<ll> v;
        ll x = n;
        while (x != -1)
        {
            v.push_back(x);
            x = par[x];
        }

        reverse(v.begin(), v.end());

        for (ll e : v)
        {
            cout << e << " ";
        }
    }
    return 0;
}