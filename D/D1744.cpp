#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define ll unsigned long long

void solve(){
    ll n,num,pow2 = 0,op = 0;
    cin>>n;
    vector<int> dps(n, 0);
    for(int i=1;i<=n;i++){
        cin>>num;
        if(num % 2 == 0)
            pow2+=log2(num & -num);
    }
    if(pow2 >= n){
        cout<<0<<endl;
        return;
    }
    for(ll i = n;i>=1;i--)
        dps[i - 1] = log2(i & -i);
    sort(dps.rbegin(),dps.rend());
    for(ll i = 0;i<n;i++){
        pow2+=dps[i];
        if(pow2 >= n){
            cout<<i + 1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}