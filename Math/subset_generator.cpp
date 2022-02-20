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

//here binary_expo can be used to calculate power
//O(2^n)

 void subset_generator(vi &v)
 {
		ll n=v.size();
	for(ll i=0;i<pow(2,n);i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				cout<<v[j]<<" ";
			}
		}
		cout<<"\n";
	}
 }
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
int main()
{
    c_p_c();
    ll n;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    }
    subset_generator(v);
  
	return 0;
}