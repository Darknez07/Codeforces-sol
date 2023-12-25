#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<ll> dp(n, 1);
    for(int i=1;i<=n;i++){
        // Brute forcing the indices
        // O(n*sqrt(n))
        // Maxing the indices in the face
        for(int j=i*2;j<=n;j+=i)
            if(v[i - 1] < v[j - 1])
                dp[j - 1] = max(dp[j - 1], dp[i - 1] + 1);
    }
    ll mx = -1;
    for(int i=0;i<n;i++)
        mx = max(mx, dp[i]);
    cout<<mx<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}