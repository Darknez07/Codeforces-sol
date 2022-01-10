#include <iostream>
#include <vector>
#define ll long long
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    ll t,n,mx,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        mx = -1,ans = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx = max(mx,v[i]);
        }
        for(int i=0;i<n;i++)
            ans = max(ans,mx - v[i]);
        cout<<ans<<endl;
    }
    return 0;
}