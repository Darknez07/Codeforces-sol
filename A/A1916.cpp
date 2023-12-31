#include <iostream>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    ll num,prod = 1;
    bool allOnes = true;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num != 1)
            allOnes = false;
        prod*=num;
    }
    if(2023 % prod == 0){
        cout<<"YES\n";
        cout<<(2023/prod)<<" ";
        for(int i=0;i<k-1;i++)
            cout<<1<<" ";
        cout<<"\n";
        return;
    }
    if(allOnes){
        cout<<"YES\n";
        cout<<2023<<" ";
        for(int i=0;i<k-1;i++)
            cout<<1<<" ";
        cout<<"\n";
        return;
    }
    cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}