#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll n,k,counts = 0;
    cin>>n>>k;
    vector<ll> v(n, 0),arr(n, 0),prefix(n + 1, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<n - 1;i++){
        if(v[i - 1] < v[i] && v[i] > v[i + 1]){
            arr[i] = 1;
        }
    }
    // Prefix sum to find the count of peaks
    for(int i=1;i<=n;i++){
        prefix[i]+=(prefix[i - 1] + arr[i - 1]);
    }
    int mx = -1,led;
    // Find the smallest "l" with maximum prefix sum
    for(int l=1;l<=(n - k + 1);l++){
        if((prefix[l + k - 2] - prefix[l]) > mx){
            mx = (prefix[l + k - 2] - prefix[l]);
            led = l;
        }
    }
    cout<<(mx + 1)<<" "<<led<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}