#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main(){
    int n,q,l,r;
    cin>>n>>q;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<ll> dp(n + 1, 0);
    for(int i=2;i<=n;i++) dp[i]+=(dp[i - 1] + (((v[i - 2] - v[i - 1]) > 0) ? (v[i - 2] - v[i - 1]): 0));
    vector<ll> back(n + 1, 0);
    for(int i=n - 1;i>=1;i--){
        back[i]+=(back[i + 1] + (v[i - 1] < v[i] ? (v[i] - v[i - 1]): 0));
    }
    while(q--){ 
        cin>>l>>r;
        if(l < r) cout<<dp[r] - dp[l]<<endl;
        else cout<<abs(back[r] - back[l])<<endl;
    }
}