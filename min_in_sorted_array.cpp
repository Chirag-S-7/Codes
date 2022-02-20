// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/

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
int findMin(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mn=INT_MAX;  
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>=arr[s])
            {
                mn=min(mn,arr[s]);  //needed as if the array is not rotated
                s=mid+1;           //if always sorted the can return directly
                                   //arr[s];
            }
            else
            {
                e=mid;
            }
        }
        return mn;
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
    cout<<findMin(v);

    return 0;
}