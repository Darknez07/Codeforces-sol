#include <iostream>
using namespace std;
#define ll long long
void solve(){
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    // if min could satisfy "laalchi log"
    // Then type 1's are awesome.
    if((m + n) <= (a + b) && m <= min(a,b)){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}