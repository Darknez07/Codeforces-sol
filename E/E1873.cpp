#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> nums(n, 0);
    ll sum = 0,num;
    for(int i=0;i<n;i++){
        cin>>num;
        nums[i] = num;
        sum+=num;
    }
    num = (sum + x)/n;
    ll water = 0;
    for(int i=0;i<n;i++){
        water+=((num - nums[i]) < 0 ? 0: (num - nums[i]));
    }
    if(water <= x){
        cout<<num<<"\n";
        return;
    }
    ll low = 0,hi = 20000000007;
    while(low < hi){
        ll mid = low + (hi - low + 1)/2;
        ll tot = 0;
        for(int i=0;i<n;i++){
            tot+=max(mid - nums[i],0LL);
        } 
        if(tot <= x) low = mid;
        else hi = mid - 1;
    }
    cout<<low<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}