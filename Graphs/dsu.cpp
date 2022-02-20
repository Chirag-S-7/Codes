#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mod             1000000007
#define inf             1e18

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll get_parent(vi &parent,ll a)
{
	return parent[a]=((parent[a]==a)?a : get_parent(parent,parent[a]));
}
void join(vi &parent,vi &rank , ll a,ll b )
{
	a=get_parent(parent,a);
	b=get_parent(parent,b);
	if(rank[a]==rank[b]);
	{
		rank[a]++;
	}
	if(rank[a]>rank[b])
	{
		parent[b]=a;
	}
	else
	{
		parent[a]=b;
	}
}
int main()
{
    c_p_c();
    ll n,q;
    cin>>n>>q;
    vi parent(n);
    vi rank(n,1);
    for(ll i=0;i<n;i++)
    {
    	parent[i]=i;
    }
    while(q--)
    {
    	string s;
    	cin>>s;
    	if(s=="union")
    	{
    		ll a,b;
    		cin>>a,b;
    		join(parent,rank,a,b);
    	}
    	else
    	{
    		ll a;
    		cin>>a;
    		cout<<get_parent(parent,a)<<"\n";
    	}
    }
    return 0;
}