#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    map<ll,int> m;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size() == 1){
        cout<<n<<endl;
        return;
    }
    vector<pair<ll,ll>> p;
    for(auto col: m){
        p.push_back(make_pair(col.first,col.second));
    }
    sort(p.begin(),p.end(),[](pair<ll,ll> a, pair<ll,ll> b){
        return a.second > b.second;
    });
    ll mx = p[0].second;
    for(int i=1;i<p.size();i++){
        mx-=p[i].second;
    }
    if(n % 2){
        if(mx  < 0){
            cout<<1<<endl;
        }else{
            cout<<mx<<endl;
        }
        return;
    }
    if(m.size() % 2){
        if(mx <= 0){
            cout<<0<<endl;
        }else{
            cout<<mx<<endl;
        }
    }else{
        if(mx <= 0){
            cout<<0<<endl;
        }else{
            cout<<mx<<endl;
        }
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}