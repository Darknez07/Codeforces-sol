#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;

void solve(){
    int n;
    cin>>n;
    int bs = n*(n-1);
    bs/=2;
    vector<int> v(bs,0);
    for (int i = 0; i < bs; i++)
        cin>>v[i];
    // Sort in ascending to get the minima's (Note can be multiple)
    sort(v.begin(),v.end());
    // Reduce n before (as n - 1 numbers first then n - 2 so on.)
    --n;
    // Loop skips each n - 1 trans;
    for(int i=(n - 1);n > 0;i+=(n - 1),--n)
        cout<<v[i]<<" ";
    // Last number or the gr8est number does'nt matter
    cout<<v[bs - 1]<<" \n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}