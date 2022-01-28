#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;
void solve(){
    ll n,sum = 0;
    cin>>n;
    vector<ll> v(n, 0);
    map<ll,int> m;
    for(int i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
        sum+=v[i];
    }
    if((2*sum) % n != 0){cout<<0<<endl;return;}
    ll to_find = (2*sum)/n;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll a = v[i];
        ll b = to_find - a;
        // One from left
        // Other from right
        if(m.count(b)) ans+=m[b];
        if(a == b) ans-=1;
    }
    cout<<(ans/2)<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}