#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod (ll)1000000007
ll retmod(ll num){
    return (num < 0 ? (mod + num%mod): num%mod);
}
int main(){
    ll x, y, n,prev = 0,prev_prev = 0,now = 0;
    cin>>x>>y>>n;
    prev_prev = retmod(x),prev = retmod(y);
    if(n == 1){cout<<prev_prev<<endl;return 0;}
    if(n == 2){cout<<prev<<endl;return 0;}
    vector<ll> s;
    s.push_back(prev_prev),s.push_back(prev);
    for(int i=2;i<6;i++){
        now = retmod(prev - prev_prev);
        s.push_back(now);
        prev_prev = prev;
        prev = now;
    }
    cout<<s[(n - 1)%6]<<" ";
    return 0;
}