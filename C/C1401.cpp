#include <iostream>
#include <vector>
#include <algorithm>
// I am genius..
using namespace std;
void solve(){
    int n,mn = INT_MAX;
    cin>>n;
    vector<int> v(n, 0),temp(n, 0);
    for(int i=0; i<n; i++) cin>>v[i],temp[i] = v[i];
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        // Swap to right location
        if(v[i] % temp[0] == 0)
            continue;
        // if the location where gcd is not divisible
        // is the correct location in sorted order itself
        // Skip
        if(v[i] == temp[i]) continue;
        cout<<"NO"<<endl;
        return;
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