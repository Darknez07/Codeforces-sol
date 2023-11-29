#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n,q,loc;
    cin>>n>>q;
    ll mx = 0,num;
    vector<ll> max_height(n,0);
    vector<ll> total_height(n + 1,0);
    for(int i =0;i<n;i++){
        cin>>num;
        total_height[i + 1]+=(total_height[i] + num);
        mx = max(num,mx);
        max_height[i] = mx;
    }
    for(int i=0;i<q;i++){
        cin>>num;
        loc = upper_bound(max_height.begin(),max_height.end(), num) - max_height.begin();
        cout<<total_height[loc]<<" ";
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}