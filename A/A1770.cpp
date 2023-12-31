#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> v(n + m, 0);
    for(int i=0;i<m+n;i++) cin>>v[i];
    sort(v.begin(),v.end() - 1);
    reverse(v.begin(),v.end());
    cout<<accumulate(v.begin(),v.begin() + n, (ll)0)<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}