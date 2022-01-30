#include <iostream>
using namespace std;
#define ll long long
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
ll l,k,r;
void solve(){
    ll odd,even;
    cin>>l>>r>>k;
    if(k == 0){
        cout<<(l == r ? (l > 1 ? "YES": "NO"): "NO")<<endl;
        return;
    }
    if((r - l + 1) % 2 == 0)
        odd = (r - l + 1)/2,even = odd;
    else if(r % 2 == 0 && l % 2 == 0)
        odd = (r - l)/2,even = odd + 1;
    else
        even = (r - l)/2,odd = even + 1;
    if(odd <= k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}