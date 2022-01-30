#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define ll long long
ll n,q,k,l,r;
void solve(){
    cin>>n>>q>>k;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<q;i++){
        cin>>l>>r;
        if(l == r){cout<<k - 1<<endl;continue;}
        cout<<k + v[r - 1] - v[l - 1] - 2*(r - l) - 1<<endl;
    }
}
int main(){
    solve();
    return 0;
}