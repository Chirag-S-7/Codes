//https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
//element present once or twice

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
//so making the element neg in 1st time so if 2nd time it appears it becomes postive thus adding that to ans
vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i]);
            nums[x-1]=-nums[x-1];
            if(nums[x-1]>0)ans.push_back(x);            
        }
        return ans;
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
    vector<int>ans = findDuplicates(v);
    return 0;
}