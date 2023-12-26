#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll neg(ll n){
    return -n;
}

void solve(){
    ll n;
    cin>>n;
    ll sum = 0,negs = 0,mn = INT_MAX;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        if(v[i] < 0){
            negs++;
            v[i] = neg(v[i]);
        }
        sum+=v[i];
        mn = min(mn, abs(v[i]));
    }
    // Odd negatives will have min as the negative elment
    if(negs % 2){cout<<sum - 2*mn<<endl;return;}
    // If even we can flip all of them by taking 2 at a time
    // pos neg pos pos neg
    // -> pos pos neg pos neg
    // -> pos pos pos neg neg
    // -> pos pos pos pos pos -> All done
    // Collecting pair of negs togather.
    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}