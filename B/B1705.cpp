#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    ll ans = 0;
    int z = 0;
    while(z < n && v[z] == 0) z++;
    for(int i=z;i<n-1;i++){
        ans+=v[i];
        if(!v[i]) ans++;
    }
    cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}