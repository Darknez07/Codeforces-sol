#include <iostream>
using namespace std;
#define ll long long
ll finds(ll n,ll res){
    if(n == 0)
        return 0;
    if(n == 1)
        return res;
    if(n == 2)
        return -1;
    return -res - 1;

}
void solve(){
    ll n,x0;
    cin>>x0>>n;
    ll d = finds(n % 4,n);
    cout<<(x0 % 2 == 0 ? (x0 - d): (x0 + d))<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}