#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n == 3 && v[1] % 2){cout<<-1<<endl;return;}
    bool found = false;
    for(int i=1;i<n-1;i++){
        if(v[i] % 2 == 0 || (v[i] > 1 && v[i] % 2))
            found = true;
    }
    if(!found){cout<<-1<<endl;return;}
    ll moves = 0;
    for(int i=1;i<n-1;i++){
        moves+=(v[i]/2 + v[i] % 2);
    }
    cout<<moves<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}