#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define ll long long
int main(){
    int n;
    ll ans = 0;
    cin>>n;
    vector<ll> v(n + 1, 0);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int i = 0,j = n + 1, to = 0;
    ll zi = 0,zj = 0;
    while(i < j){
        // Technique to increase zi
        // if it's lacking is good
        if(zi < zj)
            zi += v[++i];
        // zj is lacking increase zj
        else if(zi > zj)
            zj += v[--j];
        // To the location
        else{
            to = i;
            zi += v[++i];
            zj += v[--j];
        }
    }
    cout<<accumulate(v.begin() + 1,v.begin() + to + 1, 0ll);
    return 0;
}