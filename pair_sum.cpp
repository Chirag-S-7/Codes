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
bool pair_sum(vector<int>arr,int k)
{
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            return true;
        }
        else if(arr[i]+arr[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
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
    cout<<pair_sum(v,k);
    return 0;
}