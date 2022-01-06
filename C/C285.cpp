#include <iostream>
#include <vector>
#include <algorithm>
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i=1;i<=n;i++){
        ans+=abs(i - v[i - 1]);
    }
    cout<<ans<<endl;
    return 0;
}