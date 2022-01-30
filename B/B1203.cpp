#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(4*n, 0);
    for(int i=0; i<4*n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    ll area = v[0]*v.back();
    for(int i=0;i<n;i++){
        int l = i*2,r = 4*n - (i*2) - 1;
        if(v[l]!=v[l + 1] || v[r]!=v[r - 1] || (v[r]*v[l]) !=area){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}