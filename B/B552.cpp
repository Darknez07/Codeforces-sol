#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
ll ans(ll n, ll k){
    if(k == 2)
        return 9 + (n - 9)*2;
    return k*(n - pow(10,k - 1) + 1) + ans(pow(10, k - 1) - 1, k - 1);
}
int main(){
    ll n,k;
    cin>>n;
    k = ceil(log10(n));
    if(n <= 9){
        cout<<n<<endl;
        return 0;
    }
    if(pow(10,k) == n)
        ++k;
    cout<<ans(n, k)<<endl;
}