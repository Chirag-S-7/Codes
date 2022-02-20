#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define mii             map<ll,ll>
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

int main()
{
    c_p_c();
    int n;
    cin>>n;
    vector<int>v(n),pre_sum(n),suf_sum(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    pre_sum[0]=v[0];
    suf_sum[0]=v[n-1];

    for(int i=1;i<n;i++)
    {
        pre_sum[i]=pre_sum[i-1]+v[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        suf_sum[i]=suf_sum[i+1]+v[i];
    }
    return 0;
}