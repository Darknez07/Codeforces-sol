#include <iostream>
#define ll long long
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        b*=2;
        if((a + c) % b == 0){
            cout<<"YES"<<endl;
        }else if(b > a && (b - a) % c == 0){
            cout<<"YES"<<endl;
        }else if(b > c && (b - c) % a == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}