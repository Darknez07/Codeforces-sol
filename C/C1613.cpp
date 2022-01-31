#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void solve(){
    int n;
    ll h;
    cin>>n>>h;
    vector<ll> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    ll l = 1,r = 1e18,mid,su;
    while(l <= r){
        mid = (l + r)/2ll;
        su = mid;
        for(int i=0; i<n - 1; i++)
            su+=min(mid,v[i + 1] - v[i]);
        // We need to look in larger porition of segment
        // Because damage is not enough
        // Else we will go the lower side of the array;
        if(su < h) l = mid + 1;
        else r = mid - 1;
    }
    cout<<(r + 1)<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}