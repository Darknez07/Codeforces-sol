#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){
    return b == 0 ? a: gcd(b, a % b);
}
void solve(){
    ll n;
    cin>>n;
    if(n % 2 == 0){
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    ll l = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            l = i;
            break;
        }
    }
    if(!l){cout<<1<<" "<<(n - 1)<<endl;return;}
    l = n/l;
    cout<<l<<" "<<(n - l)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}