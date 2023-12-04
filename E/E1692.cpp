#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

// Deprecated from Brain.

void solve(){
    ll n,sum,val,count = 0;
    cin>>n>>sum;
    vector<int> nos1(n + 1,0);
    for(int i=1;i<=n;i++){
        cin>>val;
        nos1[i]+=(nos1[i - 1] + val);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}