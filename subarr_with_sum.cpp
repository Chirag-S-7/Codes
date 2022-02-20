// subarray with sum s 
//st and end index

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

pair<int,int> subarr_with_sum(vector<int> & arr,int s)
{
    int n=arr.size();
    pair<int,int>p;
    vector<int>pre_sum(n);
    pre_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre_sum[i]=pre_sum[i-1]+arr[i];
    }
    int i=0,j=0,st=-1,e=-1;
    while(j<n && pre_sum[j]<=s)
    {
        j++;
    }
    if(pre_sum[j]==s)
    {
        st=0;
        e=j;
    }
    else
    {
        while(j<n)
        {
            while(pre_sum[j]-pre_sum[i] > s)
            {
                i++;
            }
            if(pre_sum[j]-pre_sum[i] == s)
            {
                st=i+1;
                e=j;
                break;
            }
            j++;
        }
    }
    p=make_pair(st,e);
    return p;
}
int main()
{
    c_p_c();
    int n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    pair<int,int>p = subarr_with_sum(v,s);
    cout<<p.first<<" "<<p.second;
    return 0;
}