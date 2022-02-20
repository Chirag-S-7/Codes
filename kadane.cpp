//maximum contiguous array sum
//https://leetcode.com/problems/maximum-subarray/submissions/
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

int kadane(vector<int>&arr)
{
    int ans=INT_MIN;
    int curr_sum=0;
    for(ll i=0;i<arr.size();i++)
    {
        curr_sum+=arr[i];
        ans=max(ans,curr_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
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
    cout<<kadane(v);
    return 0;
}