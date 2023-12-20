#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#define ll long long

void solve(){
    int n;
    bool already = true;
    cin>>n;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<n;i++){
        if(gcd(v[i - 1], v[i])!=1){
            already = false;
            break;
        }
    }
    if(already){
        cout<<0<<endl;
        return;
    }
    ll mn = LONG_MAX;
    int indx = -1;
    for(int i=0;i<n;i++){
        if(v[i] < mn){
            mn = v[i];
            indx = i;
        }
    }
    cout<<(n - 1)<<endl;
    for(int i=0;i<n;i++){
        if(i == indx) continue;
        cout<<indx + 1<<" "<<i+1<<" "<<mn<<" "<<mn + abs(indx - i)<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}