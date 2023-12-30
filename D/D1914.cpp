#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> A(n,{0,0}),B(n,{0,0}),C(n, {0,0});
    ll ans = 0;
    for(int i=0;i<n;i++){
        cin>>A[i].first;
        A[i].second = i;
    }
    for(int i=0;i<n;i++){
        cin>>B[i].first;
        B[i].second = i;
    }
    for(int i=0;i<n;i++){
        cin>>B[i].first;
        B[i].second = i;
    }
    sort(A.rbegin(),A.rend());
    sort(B.rbegin(),B.rend());
    sort(C.rbegin(),C.rend());
    auto f = [&](int i,int j,int k){
                if(A[i].second == B[j].second || A[i].second == C[k].second || B[j].second == C[k].second){
                    return (ll) 0;
                }else{
                    return A[i].first + B[j].first + C[k].first;
                }
            };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k =0;k<3;k++)
                ans = max(ans, f(i,j,k));
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}