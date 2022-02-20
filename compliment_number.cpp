//https://leetcode.com/problems/complement-of-base-10-integer/submissions/

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
    int n,i=0;
    cin>>n;
   	vi ans;
   	if(n==0)
   	{
   		cout<<"1";
   	}
   	else
   	{
   		while(n!=0)
   	{
   		ans.push_back(n&1);
   		n=n>>1;
   		i++;
   	}

   int compliment=0;
   for(int j=0;j<i;j++) 
   {
   		if(ans[j]==1)
   		{
   			ans[j]=0;
   		}
   		else
   		{
   			ans[j]=1;
   		}
   		compliment+=(ans[j]*pow(2,j));
   }
   cout<<compliment;
   	}
   	
    return 0;
}