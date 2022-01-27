#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
// I am so intelligent :)
using namespace std;
int main(){
    int n,k,sum = 0;
    cin>>n>>k;
    vector<pair<int,int> > v(n, {0,0});
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
        if(v[i].second == 1) sum+=v[i].first;
    }
    vector<int> dp(n + 1, 0);
    for(int i=0;i<n;i++){
        if(v[i].second == 1) dp[i + 1] = dp[i];
        else dp[i + 1] = dp[i] + v[i].first;
    }
    int mx = -1;
    for(int i=0;i<=(n - k);i++)
        mx = max(mx, dp[i + k] - dp[i]);
    cout<<(sum + mx)<<endl;
    return 0;
}