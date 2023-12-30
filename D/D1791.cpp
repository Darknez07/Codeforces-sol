#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    string s;
    cin>>n>>s;
    vector<bool> seen(26, false);
    vector<int> dp(n + 1,0);
    vector<int> dp2(n + 1, 0);
    for(int i=0;i<n;i++){
        if(seen[s[i] - 'a']){
            dp[i + 1] = dp[i];
            continue;
        }
        seen[s[i] - 'a'] = true;
        dp[i + 1]+=(1 + dp[i]);
    }
    seen.clear();
    seen.assign(26,false);
    for(int i=n - 1;i>=0;i--){
        if(seen[s[i] - 'a']){
            dp2[i] = dp2[i + 1];
            continue;
        }
        seen[s[i] - 'a'] = true;
        dp2[i]+=(1 + dp2[i + 1]);
    }
    int mx = dp[n];
    for(int i=0;i<n;i++){
        if(dp[i] == dp[i + 1])
            mx = max(mx,dp[i] + dp2[i]);
    }
    cout<<mx<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}