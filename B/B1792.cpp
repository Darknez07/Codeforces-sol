#include <iostream>
using namespace std;
#define ll long long

void solve(){
    ll a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    if(a1 == 0){
        cout<<1<<"\n"; 
        return;
    }
    // abs(a2 - a3) is left out from using all the minimas
    // And a4 is how long does joking last
    cout<<a1 + 2*min(a2,a3) + min(a1 + 1, abs(a2 - a3) + a4)<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--) solve();
}