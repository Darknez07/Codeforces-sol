#include <iostream>
#include <string>
using namespace std;
#define ll long long

void solve(){
    ll n,ans;
    string s;
    cin>>n>>s;
    ans = n; // Every 1 len is already paranoid
    for(int i=1;i<n;i++) // longer than 1 len
        if(s[i] != s[i - 1]) // If unequal is found we can reduce left part to it's bare bones
        // Thus every left part forms a substring
            ans+=i;
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}