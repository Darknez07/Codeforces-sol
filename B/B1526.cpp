#include <iostream>
#include <string>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    // even "11", odd "111"
    // And can make any n*1111
    // So for 1111111=> 11 00000 + 11000 + 111
    // Done
    // 2000 => 1111
    while(n > 0){
        if(n % 11 == 0){
            cout<<"YES"<<endl;
            return;
        }
        n-=111;
    }
    if(n == 0){cout<<"YES"<<endl;return;}
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}