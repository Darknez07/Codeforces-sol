#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
string a,b;
void solve(){
    cin>>n>>a>>b;
    vector<int> dpa(n + 1, 0),dpb(n + 1, 0);
    for(int i=1;i<=n;i++){
        if(b[i - 1] == '1') dpb[i] = dpb[i - 1] + 1;
        else dpb[i] = dpb[i - 1];
        if(a[i - 1] == '1') dpa[i] = dpa[i - 1] + 1;
        else dpa[i] = dpa[i - 1];
    }
    bool change = false;
    for(int i=n;i>=1;i--){
        if(a[i - 1]!=b[i - 1] && !change){
            if(dpa[i] == dpb[i]){
                change = true;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        if(change && a[i - 1] == b[i - 1]){
            if((i - dpa[i]) == dpb[i]){
                change = false;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}