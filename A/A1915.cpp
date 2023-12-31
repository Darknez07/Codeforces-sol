#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<(a^b^c)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}