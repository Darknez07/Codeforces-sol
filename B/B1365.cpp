#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n,ty;
    cin>>n;
    bool one = false,zero = false,sorted = true;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i && v[i - 1] > v[i])
            sorted = false;
    }
    for(int i=0;i<n;i++){
        cin>>ty;
        if(ty == 0) zero = true;
        if(ty == 1) one = true;
    }
    if(sorted){
        cout<<"Yes"<<endl;
        return;
    }
    if(zero && one){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}