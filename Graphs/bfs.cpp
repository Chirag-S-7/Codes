#include<bits/stdc++.h>
#define ll long long

using namespace std;
 vector<list<ll> >g;
 
void bfs(ll v)
{
    vector<bool>vis(v,false);
    queue<ll>q;
    q.push(0);
    while(!q.empty())
    {
        ll tmp= q.front();
        q.pop();
        vis[tmp]=true;
        cout<<tmp<<" ";
        for(auto &neighbour : g[tmp])
        {
            if(!vis[neighbour])
            {
                vis[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
}
int main()
{
    ll v,e;
    cin>>v;
    g.resize(v,list<ll>() );
    cin>>e;
    while(e--)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
   // q.push(0);
   
    bfs(v);
    return 0;
}


