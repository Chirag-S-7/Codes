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
int maximum_circular_subarray_sum(vector<int>v)
{
    int total_sum=0;
    int non_wrapsum;
    int wrapsum;
    non_wrapsum=kadane(v); // no need of circular sub array directly suing kadane 
    for(int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
        v[i]=-v[i];
    }
    wrapsum = total_sum+kadane(v);  // kadane finding non-contributing subarray as we hav
                                    //negative and thus it will be added 
    //eg = 4 -4 6 -6 10 -11 12    kadane will give 11 and as -11 present in total sum it 
                                   // will nullify

     
    return max(wrapsum,non_wrapsum); // returning max of both
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
    cout<<maximum_circular_subarray_sum(v);
    return 0;
}