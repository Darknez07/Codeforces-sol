#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long


ll roundoff(double fl){
    if(ceilf(fl) == fl)
        return ceil(fl) - 1;
    else
        return ceil(fl);
}

void solve(){
    int n;
    ll per;
    cin>>n>>per;
    vector<ll> db(n, 0);
    for(int i=0;i<n;i++) cin>>db[i];
    ll sum = db[0],perr;
    ll ans = 0;
    for(int i=1;i<n;i++){
        ans = max(ans,(100ll*db[i] - per*sum + per - 1)/per);
        sum+=db[i];
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}