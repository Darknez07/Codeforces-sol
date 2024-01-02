#include <iostream>
#include <numeric>
using namespace std;
#define ll long long

void solve(){
    ll a,b,gc;
    cin>>a>>b;
    if(a == 1){
        cout<<b*b<<"\n";
        return;
    }else{
        gc = gcd(a,b);
        a/=gc;
        b/=gc;
        if(a == 1){
            cout<<b*b*gc<<"\n";
            return;
        }
        cout<<a*b*gc<<"\n";
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}