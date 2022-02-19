#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> v(n, 0),frnds(m, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>frnds[i];
    sort(v.rbegin(),v.rend());
    int start = 0;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(v[i] - 1 == start){
            ans+=frnds[start];
        }else if((v[i] - 1) > start){
            ans+=frnds[start];
            start++;
        }else{
            ans+=frnds[v[i] - 1];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}