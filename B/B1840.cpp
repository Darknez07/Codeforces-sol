#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    k = min(k, (ll)30); // 2^30 is more than enough
    // All coins can be taken or none of themx
    cout<<min(n, (ll)((1 << k) - 1)) + 1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}