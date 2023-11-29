#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
// Less space 20ms improve

void solve(){
    int n,mn = INT_MAX,num,first;
    cin>>n;
    cin>>first;
    mn = min(mn,first);
    for(int i=1;i<n;i++){
        cin>>num;
        mn = min(num,mn);
    }
    if(mn == first)
        cout<<"Bob";
    else
        cout<<"Alice";
    cout<<"\n";
}

int  main(){
    int t;
    cin>>t;
    while(t--) solve();
}