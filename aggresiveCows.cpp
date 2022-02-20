//https://leetcode.com/problems/magnetic-force-between-two-balls/submissions/
// or 
//https://www.spoj.com/problems/AGGRCOW/
//both have same logic
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
bool isPossible(vector<int>& arr, int m, int mid)
    {
        int balls=1;
       int lastPos=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-lastPos>=mid)
            {
                lastPos=arr[i];
                balls++;
            }
            if(balls==m)
            {
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int s=0;
        int e=-1;
        int ans=-1;
        for(int i=0;i<arr.size();i++)
        {
            e=max(e,arr[i]);
        }
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isPossible(arr,m,mid))
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
int main()
{
    c_p_c();
    int n,k,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<maxDistance(v,m);
    return 0;
}