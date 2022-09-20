// Too slow :(
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    ll n,t,x,y;
    cin>>n>>t;
    vector<ll> v(n, 0);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    vector<ll> cum(n + 1, 0);
    for(ll i=1;i<=n;i++) cum[i]+=(cum[i - 1] + v[i - 1]);
    while(t--){
        cin>>x>>y;
        cout<<(cum[x] - cum[x - y])<<endl;
    }
    return 0;
}