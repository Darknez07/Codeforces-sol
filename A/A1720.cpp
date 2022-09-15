#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll f = a*d,s = b*c;
    if(f == s){cout<<0<<endl;return;}
    if(f == 0 || s == 0){cout<<1<<endl;return;}
    if(f % s == 0 || s % f == 0){cout<<1<<endl;return;}
    cout<<2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}