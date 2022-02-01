#include <iostream>
#include <string>
using namespace std;
int n;
void solve(){
    int z = 0;
    string s;
    cin>>n>>s;
    if(n <= 2){
        cout<<(n == 1 ? "YES":(s[0] == s[1] ? "NO" : "YES"))<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}