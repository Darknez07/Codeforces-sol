#include <iostream>
#include <string>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.length() <= 2){cout<<0<<endl;return;}
    int ones = 0,zeros;
    for(int i=0;i<s.length();i++){
        if(s[i] == '1') ones++;
    }
    zeros = s.length() - ones;
    if(zeros!=ones){
        cout<<min(zeros,ones)<<endl;
        return;
    }
    int l = 0,r = s.length() - 1;
    if(s[l] == s[r]){
        if(s[l] == '1') ones--;
        if(s[r] == '0') zeros--;
        cout<<min(zeros,ones)<<endl;
        return;
    }
    cout<<(zeros - 1)<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}