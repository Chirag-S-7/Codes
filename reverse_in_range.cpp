//https://leetcode.com/problems/reverse-integer/submissions/

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
int rev(int x)
{

  int ans=0;
        while(x!=0)
        {
            int dig=(x%10);
            if(ans>(INT_MAX/10) or ans<(INT_MIN/10))
            {
            	return 0;
            }
            ans=(ans*10)+dig;
            x=x/10;
        }
        return ans;
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
    int n;
    cin>>n;
   cout<< rev(n);
    return 0;
}