//https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
//using hashmap O(n) space and time
// can be done using 2 pointer
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

vector<int> intersection(vector<int>&p ,vector<int>&q)
{
	vector<int>ans;
	unordered_map<int,int>m;
	for(int i=0;i<p.size();i++)
	{
		m[p[i]]++;
	}
	for(int i=0;i<q.size();i++)
	{
		if(m[q[i]]>0)
		{
			ans.push_back(q[i]);
			m[q[i]]--;
		}
	}
	return ans;
}
vector<int> intersection2(vector<int>&p ,vector<int>&q)
{
	vector<int>ans;
	int i=0,j=0;
    while(i<p.size() && j<q.size())
    {
        if(p[i]<q[j])
        {
            i++;
        }
        else if(p[i]>q[j])
        {
            j++;
        }
        else{
            ans.push_back(p[i]);
            i++;
            j++;
        }
    }
	return ans;
}
int main()
{
    c_p_c();
    int n,m;
    cin>>n>>m;
    vector<int>p(n),q(m);
    for(int i=0;i<n;i++)
    {
    	cin>>p[i];
    }
    for(int i=0;i<m;i++)
    {
    	cin>>q[i];
    }
    vector<int> ans =intersection(p,q);
    for(auto i:ans)
    {
    	cout<<i<<" ";
    }
    return 0;
}