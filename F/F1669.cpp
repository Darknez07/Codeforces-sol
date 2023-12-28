#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll ans = 0;
    ll suml = v[0],sumr = v[n - 1];
    int l = 0, r = n - 1;
    while(l < r){
        if(suml == sumr)
            ans = max(ans, (ll)(l + 1 + n -r));
        if(suml <= sumr)
            l++,suml+=v[l];
        else
            r--,sumr+=v[r];
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}