#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll ans = 0,n,x;
    cin>>n>>x;
    vector<ll> v(n, 0);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++)
        ans+=(x*v[i]),x-=(x > 1 ? 1: 0);
    cout<<ans<<endl;
    return 0;
}