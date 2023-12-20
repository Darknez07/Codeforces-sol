#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    ll sum = 0;
    vector<ll> v(n);
    vector<ll> dp(n + 1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(i == 0) dp[i + 1] = v[i];
        else dp[i + 1]+=(v[i] + dp[i]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<dp[i]<<" ";
    // }
    ll max_indx = -1,min_indx = -1,mx = LONG_MIN, mn = LONG_MAX;
    for(int i=0;i<n + 1;i++){
        if(dp[i] <= mn){
            mn = dp[i];
            min_indx = i;
        }
    }
    for(int i=n;i>=0;i--){
        if(dp[i] >= mx){
            mx = dp[i];
            max_indx = i;
        }
    }
    if(max_indx == n && min_indx == 0){
        cout<<"YES"<<endl;
        return;
    } 
    if((mx - mn) >= sum){
        cout<<"NO"<<endl;
        return;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}