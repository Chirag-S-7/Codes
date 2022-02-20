//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/

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
bool isPossible(vector<int>& arr , int m ,int k ,int mid)
    {
        int n=arr.size();
        vector<bool>b(n,false);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=mid)
            {
                b[i]=true;
            }
        }
        int sum=0,boq=0;
        for(int i=0;i<n;i++)
        {
            if(b[i])
            {
                sum++;
            }
            else
            {
                sum=0;
            }
            if(sum==k)
            {
                sum=0;
                boq++;
            }
            if(boq==m)
            {
                return true;
            }
           
        }
        
            return false;
       
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        int s=1,e=-1;
        int ans=-1;
        if(m*k > n)
        {
            return -1;
        }
        for(int i=0;i<n;i++)
        {
            e=max(e,arr[i]);
        }
        while(s<=e)
        {
            int mid=s+(e-s)/2;   
            if(isPossible(arr,m,k,mid))
            {
                ans=mid;
               //cout<<ans<<"\n";
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
       
        return ans;
    }
int main()
{
    c_p_c();
    int n,k,m;
    cin>>n>>m>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<minDays(v,m,k);
    return 0;
}