#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n, 0),ans;
    for(int i=0;i<n;i++) cin>>v[i];
    ans.push_back(v[0]);
    for(int i=1;i<n-1;i++){
        // Keep earsing mid's 
        // And local minima and maxima
        // Such that we get the max difference
        // Example to find the local maxima
        if((v[i - 1] < v[i])!=(v[i] < v[i + 1]))
            ans.push_back(v[i]);
    }
    ans.push_back(v[n - 1]);
    cout<<ans.size()<<"\n";
    for(auto x: ans)
        cout<<x<<" ";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}