//https://leetcode.com/problems/sort-colors/submissions/
//3 pointers
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
void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        
   while(mid <= high)
    {
        if(nums[mid] == 0) swap(nums[low++],nums[mid++]);
        else if(nums[mid] == 1)  mid++;
        else swap(nums[mid],nums[high--]);
    }
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
    sortColors(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}