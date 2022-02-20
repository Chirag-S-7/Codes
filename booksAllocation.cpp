//https://www.interviewbit.com/problems/allocate-books/

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
bool isPossible(vector<int>& arr ,int mid ,int n,int k)
{
    int students=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]<=mid)
        {
            sum+=arr[i];
        }
        else
        {
            students++;
            if(students>k || arr[i]>mid)
            {
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int solution(vector<int>& arr , int k)
{
    int n=arr.size();
    int ans=-1;
    int s=INT_MAX,e=0;
    if(n<k)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        e+=arr[i];
        s=min(s,arr[i]);
    }
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isPossible(arr,mid,n,k))
        {
            ans=mid;
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
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<solution(v,k);
    return 0;
}