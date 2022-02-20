//Google Kickstart
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
int max_len_arithmetic_array(vector<int>& arr)
{
    int diff=arr[1]-arr[0];
    int ans=1;
    int curr_len=2;
    for(ll i=2;i<arr.size();i++)
    {
        if(arr[i]-arr[i-1]==diff)
        {
            curr_len++;
            ans=max(ans,curr_len);
        }
        else
        {
            diff=arr[i]-arr[i-1];
            curr_len=2;
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
    cout<<max_len_arithmetic_array(v);
    return 0;
}