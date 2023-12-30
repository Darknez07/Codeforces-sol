#include <iostream>
using namespace std;
#define ll long long

bool FindM(ll n, ll m){
    if(m == n) return true;
    if(n % 3) return false;
    return (FindM(n/3,m) || FindM(2*n/3,m));
}

void solve(){
    ll n,m;
    cin>>n>>m;
    cout<<(FindM(n,m) ? "YES": "NO")<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}