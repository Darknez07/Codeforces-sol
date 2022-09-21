#include <iostream>
using namespace std;

void solve(){
    string str;
    cin>>str;
    if(str.length() % 2){
        cout<<"NO\n";
        return;
    }
    int len = str.length()/2;
    bool val = (str.substr(0,len) == str.substr(len));
    cout<<(val ? "YES": "NO")<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}