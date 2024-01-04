#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    set<ll> st;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i+=2) v[i]*=-1;
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(st.count(sum)){
            cout<<"YES\n";
            return;
        }
        st.insert(sum);
    }
    if(st.count(0)){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}