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
 
int main()
{
    c_p_c();
    ll n,i=0;
    cin>>n;
    n=-n;
   	vi ans(32);
   	while(n!=0)
   	{
   		ans[i]=n&1;
   		n=n>>1;
   		i++;
   	}
   	reverse(ans.begin(),ans.end());
   	for(ll i=0;i<32;i++)
   	{
   		if(ans[i]==0)
   		{
   			ans[i]=1;
   		}
   		else
   		{
   			ans[i]=0;
   		}
   	}
   	ll carry=1;
   	for(ll i=31;i>=0;i++)
   	{
   		if((ans[i]+carry)%2==0)
   		{
   			ans[i]=0;
   			carry=1;
   		}
   		else
   		{
   			break;
   		}
   	}
   	for(ll i=0;i<32;i++)
   	{
   		cout<<ans[i];
   	}
    return 0;
}