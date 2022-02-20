//https://leetcode.com/problems/unique-number-of-occurrences/submissions/
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
bool uniqueOccurrences(vector<int>& arr)
{
        unordered_map<int,int>m,u;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto j : m)
        {
            //cout<<j.first<<" "<<j.second<<" ";
            if( u.empty() || u.find(j.second)==u.end())
            {
                u[j.second]=1;
            }
            else
            {
                return false;
            }
        }
        return true;
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
    cout<<uniqueOccurrences(v);
    return 0;
}