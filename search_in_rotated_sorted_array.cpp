// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/

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
int findPivot(vector<int>& arr)
    {
        int s=0,e=arr.size()-1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>=arr[0])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
            }
        }
        return s;
    }
    int binarySearch(vector<int>& arr,int s , int e, int k)
    {
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int k) {
        int ans;
        int n=arr.size();
        if(arr[0]<=arr[n-1])
        {
            ans=binarySearch(arr,0,n-1,k);
        }
        else
        {
            int pivot=findPivot(arr);
            int t1=binarySearch(arr,0,pivot-1,k);
            int t2=binarySearch(arr,pivot,n-1,k);
            if(t1>=0)
            {
                ans=t1;
            }
            else if(t2>=0)
            {
                ans=t2;
            }
            else
            {
                ans=-1;
            }
        }
        return ans;
    }
int main()
{
    c_p_c();
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<search(v,k);

    return 0;
}