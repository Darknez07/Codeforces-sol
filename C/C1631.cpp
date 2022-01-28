#include <iostream>
#include <cmath>
using namespace std;
int n,k;
void solve(){
    cin>>n>>k;
    if(k == 0){
        for(int i=0;i<(n/2);i++){
            cout<<(n - i - 1)<<" "<<i<<endl;
        }
        return;
    }
    if(k == n - 1){
        if(n == 4){
            cout<<-1<<endl;
            return;
        }else{
            cout<<(n/2 - 1)<<" "<<1<<endl;
            cout<<n/2<<" "<<0<<endl;
            cout<<n - 1<<" "<<n - 2<<endl;
            for(int i=2;i<(n/2 - 1);i++)
                cout<<i<<" "<<(n - 1 - i)<<endl;
            return;
        }
    }
    cout<<n - 1<<" "<<k<<endl;
    cout<<0<<" "<<(n - 1 - k)<<endl;
    if(n == 4) return;
    for(int i=1;i<(n/2);i++){
        if(i == k || i == (n - 1 - k))  continue;
        cout<<i<<" "<<n - i - 1<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}