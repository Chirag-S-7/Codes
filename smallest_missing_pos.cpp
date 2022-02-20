// smallest missing positive number in the array

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

int min_pos(vector<int>v)
{
    vector<bool>b(sz,false);
    for(auto &i : v)
    {
        if(i>=0)
        {
            b[i]=true;
        }
    }
    for(int i=1;i<sz;i++)
    {
        if(b[i]==false)
        {
            return i;
        }
    }
}
int main()
{
    c_p_c();
    int n,s;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<min_pos(v);
    return 0;
}