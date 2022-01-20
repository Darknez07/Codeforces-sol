#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
int main(){
    int t,n,m;
    ll val;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int> v(m, 0);
        for(int i=0;i<n;i++){
            cin>>val;
            v[val % m]++;
        }
        ll ans = (v[0] > 0 ? 1: 0);
        for(int i=1;i<((m+1)/2);i++){
            val = min(v[i],v[m - i]);
            if(!val){
                ans+=max(v[i],v[m - i]);
                continue;
            }
            v[i]-=val,v[m - i]-=val;
            ans++;
            val = max(v[i],v[m - i]);
            if(val) val--;
            ans+=val;
        }
        if(m % 2 == 0 && v[m/2])
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}