//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbE0xVEM5M19GM0EwTUhaRWxVRFBtUkZVNk9FUXxBQ3Jtc0trUHJETGtJY0ZXTG5uTXFQN1FPdXBiY1RTLTFtamNpdXJLSEdQUlRWSkVGRmxGTTdrSHZESXR4NDY1aHhoMGNzQWJfY0VIWl9uWGhLVjViVkc2a2wyNVZqdFhkSEpDeTB0aWcwaEw1NVpnU1pXUl9YRQ&q=https%3A%2F%2Fbit.ly%2F3y01Zdu
//unique using xor
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
int solve(int *arr,int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans=ans^arr[i];
	}
	return ans;
}
int main()
{
    c_p_c();
    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
   	int ans=solve(arr,n);
   	cout<<ans;
    return 0;
}