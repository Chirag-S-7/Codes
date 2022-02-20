// Google Kickstart

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
int record_breaking_days(vector<int>& arr)
{
    int ans=0,n=arr.size();
    vector<int>pre_max(n-1);
    pre_max[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre_max[i]=max(pre_max[i-1],arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(pre_max[i]==arr[i] && arr[i]>arr[i+1])
        {
            ans++;
        }
    }
    return ans;
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
    cout<<record_breaking_days(v);
    return 0;
}