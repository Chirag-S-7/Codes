#include<bits/stdc++.h>
#define ll long long

using namespace std;

void dfs(ll node, vector<bool>& vis, vector<list<ll> >g)
{
    cout<<node<<" ";
    vis[node]=true;
    for(auto &neighbour : g[node])
    {
        if(!vis[neighbour])
        {
            vis[neighbour]=true;
            dfs(neighbour,vis,g);
        }
    }
}
int main()
{
    ll v,e;
    cin>>v;
    vector<list<ll> >g(v,list<ll>() );
    cin>>e;
    while(e--)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool>vis(v,false);
    dfs(0,vis,g);
    return 0;
}