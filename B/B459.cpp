#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n, 0);
    ll mx = -1, mn = LONG_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }
    ll mx_count = 0,mn_count = 0;
    for(int i=0;i<n;i++){
        if(v[i] == mx)
            mx_count++;
        else if(v[i] == mn)
            mn_count++;
    }
    if(mx_count !=0 && mn_count != 0)
        cout<<(mx - mn)<<" "<<(mx_count*mn_count)<<endl;
    else
        cout<<(mx - mn)<<" "<<(mx_count*(mx_count - 1)/2)<<endl;
    return 0;
}