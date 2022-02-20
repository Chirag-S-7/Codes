// first repeating element index (1-based)

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

const int sz=10e6+2;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int repeating_index(vector<int> & arr)
{
    int n=arr.size();
    vector<int>idx(sz,-1);
    int ans=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]==-1)
        {
            idx[arr[i]]=i;
        }
        else
        {
            ans=min(idx[arr[i]],ans);
        }
    }
    if(ans==INT_MAX)
    {
        return -1;
    }
    return ans+1; //1 based
}
int main()
{
    c_p_c();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<repeating_index(v);
    return 0;
}