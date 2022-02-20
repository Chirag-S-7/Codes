// https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/

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
int peakIndexInMountainArray(vector<int>& v) {
        int s=0,e=v.size()-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(m!=0 && v[m]>v[m-1] && v[m]>v[m+1])
            {
                return m;
            }
            else if(v[m]<v[m+1])
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return 0;
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
    cout<<peakIndexInMountainArray(v);

    return 0;
}