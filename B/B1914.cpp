#include <vector>
#include <iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        cout<<i<<" ";
    for(int i=n;i>k;i--)
        cout<<i<<" ";
    cout<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}