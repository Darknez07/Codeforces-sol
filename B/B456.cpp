#include <iostream>
#include <string>
using namespace std;
#define ll long long
ll ans(ll x, ll y, ll p){
    ll res = 1;
    while(y > 0){
        if(y & 1)
           res = (res * x) % p;
        y>>=1;
        x = (x * x) % p;
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    ll mod = 5,remB = 0;
    for(int i=0;i<s.length();i++){
        remB = (remB * 10 + s[i] - '0') % (mod - 1);
    }
    ll acc = 1;
    for(int i=2;i<=4;i++){
        acc+=ans(i,remB,mod);
    }
    cout<<acc%mod<<endl;
    return 0;
}