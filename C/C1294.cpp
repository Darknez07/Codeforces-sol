#include <iostream>
#include <cmath>
#include <set>
using namespace std;
#define ll long long
// Real genius
set<ll> s;
void solve(){
    ll n;
    cin>>n;
    s.clear();
    for(ll i=2;i<=sqrt(n);i++){
        if(s.size() == 2) break;
        if(n % i == 0 && !s.count(i)){
            s.insert(i);
            n/=i;
        }
    }
    s.insert(n);
    if(s.size() >= 3){
        cout<<"YES"<<endl;
        int i = 3;
        for(auto x: s){
            if(i == 0) break;
            cout<<x<<" ";
            i--;
        }
    }else{
        cout<<"NO";
    }
    cout<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}