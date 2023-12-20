#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long

void solve(){
    ll n,mul,cnt = 0;
    cin>>n>>mul;
    map<ll,int> mapper;
    vector<ll> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i],mapper[v[i]]++;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(mapper[v[i]] > 0 && mapper[mul*v[i]] > 0)
            mapper[v[i]]--,cnt+=2,mapper[mul*v[i]]--;
    }
    cout<<(n - cnt)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}