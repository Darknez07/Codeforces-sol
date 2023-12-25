#include <iostream>
#include <vector>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n,0);
    int negs = 0,neg_place = -1;
    ll prod = 1;
    bool hasZero = false;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i] < 0)
            negs++,neg_place = i;
        if(v[i] == 0)
            hasZero = true;
    }
    if(hasZero){
        cout<<0<<endl;
        return;
    }
    if(negs  % 2){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    if(negs == 0){
        cout<<1<<" "<<0<<endl;
        return;
    }
    cout<<neg_place + 1<<" "<<0<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}