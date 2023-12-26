#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    ll n,q,sum;
    cin>>n>>q;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(),v.rend());
    vector<ll> dp(n +1, 0);
    for(int i=0;i<n;i++){
        dp[i + 1]+=(v[i] + dp[i]);
    }
    int loc;
    for(int i=0;i<q;i++){
        cin>>sum;
        loc = lower_bound(dp.begin(),dp.end(), sum) - dp.begin();
        if(loc > n)
            cout<<-1<<endl;
        else
            cout<<loc<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}