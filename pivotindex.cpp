// https://leetcode.com/problems/find-pivot-index/submissions/

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
int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        int ans=-1;
        vector<int>pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+arr[i];
        }
        if(pre[n-1]-arr[0]==0)
        {
            return 0;
        }
        for(int i=1;i<n-1;i++)
        {   
            if(pre[i]-arr[i] == pre[n-1]-pre[i])
            {
                return i;
            }
        }
        if(pre[n-1]-arr[n-1]==0)
        {
            return n-1;
        }
        
        return ans;
    }
int main()
{
    c_p_c();
    int n,k;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<pivotIndex(v);

    return 0;
}