#include <iostream>
#include <cmath>
using namespace std;
int n;
void solve(){
    cin>>n;
    if(n == 2){
        cout<<"0 1"<<endl;
        return;
    }
    int bits = ceil(log2(n)) - 1;
    int mx = 1<<bits;
    int reserved = (n - 1) - mx;
    for(int i=2;i<mx;i++){
        if(i != reserved)
            cout<<i<<" ";
    }
    cout<<"1 0 ";
    for(int i=mx;i<n;i++)
        cout<<i<<" ";
    if(reserved > 1)
        cout<<reserved<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}