// first and last index of element in sorted array
//binary search
//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
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
pair<int,int> solve(vector<int>&v , int k)
{
    int e=v.size()-1,s=0;
    int left=-1,right=-1;
    pair<int,int>p;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==k)
        {
            left=mid;
            e=mid-1;
        }
        else if(v[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    e=v.size()-1,s=0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==k)
        {
            right=mid;
            s=mid+1;
        }
        else if(v[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    p=make_pair(left,right);
    return p;

}
int main()
{
    c_p_c();
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    pair<int,int>p=solve(v,k);
    cout<<p.first<<" "<<p.second;

    return 0;
}