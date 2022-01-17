#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
int main(){
    ll n,k,count,x,need;
    cin>>n>>k>>x;
    vector<ll> v(n, 0),needs;
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(ll i=1;i<n;i++){
        if((v[i] - v[i - 1]) <= x)
            continue;
        need = (v[i] - v[i - 1]);
        need-=(need % x == 0 ? x: 0);
        need/=x;
        needs.push_back(need);
    }
    sort(needs.begin(), needs.end());
    int i;
    for(i=0;i<needs.size();i++){
        if(k < needs[i])
            break;
        k-=needs[i];
    }
    cout<<(needs.size() - i + 1)<<endl;
    return 0;
}