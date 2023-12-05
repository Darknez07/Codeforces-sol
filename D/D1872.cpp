#include <iostream>
#include <numeric>
using namespace std;
#define ll long long

ll lcm(ll x, ll y){
    return (x*y)/gcd(x,y);
}

ll big_sum(ll l, ll r){
    if(l > r)
        return 0;
    return (l + r) * (r - l + 1) / 2;
}
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll l = lcm(x,y);
    ll plus = n/x - n/l;
    ll minus = n/y - n/l;
    cout<<(big_sum(n - plus + 1, n) - big_sum(1,minus))<<endl;
    return;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}