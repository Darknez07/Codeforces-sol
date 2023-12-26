#include <iostream>
#include <string>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    s = "0" + s;
    if(s[1] - '0' >= 5){
        cout<<"1" + string(s.length() - 1,'0')<<endl;
        return;
    }
    int p;
    for(int i=s.length() - 1;i>=0;i--)
        if(s[i] >= '5') s[i - 1]++,p=i;
    for(int i=(s[0] == '0');i<s.length();i++){
        cout<<(i >= p ? '0': s[i]);
    }
    cout<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}