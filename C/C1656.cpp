#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());    
    bool one = false,consec = false;
    for(int i=0;i<n;i++){
        // One won't leave our side after any operations
        if(v[i] == 1) one = true;
        // If consecutive and 1 both exist we will get 0 and 1
        // But if one 1 exist and no consecutive we can
        // make all 1's by divi (max - 1)
        if(i < n - 1 && v[i] + 1 == v[i + 1]) consec = true;
    }
    cout<<((one && consec) ? "NO":"YES")<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}