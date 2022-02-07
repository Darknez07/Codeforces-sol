#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long
bool proof(vector<ll> dp, int mid,ll t){
    for(int i=0;i<(dp.size() - mid);i++)
    // Place where section of chunk lies
        if(dp[i + mid] - dp[i] <= t)
            return true;
    return false;
}
int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n, 0),dp(n + 1, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n == 1){cout<<(v[0] < t ? 1: 0)<<endl;return 0;}
    for(int i=1;i<=n;i++) dp[i]+=(dp[i - 1] + v[i - 1]);
    int l = 0,r = n;
    while(l < r){
        int mid = (l + r)/2 + (l + r)%2;
        if(proof(dp,mid,t)) l = mid;
        else r = mid - 1;
    }
    cout<<l<<endl;
    return 0;
}