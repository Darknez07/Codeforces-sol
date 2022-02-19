#include <iostream>
#include <string>
using namespace std;
void solve(){
    string s;
    cin>>s;
    char what;
    for(int i=1;i<s.length();i++){
        if(s[i - 1]!=s[i]){
            what = (s[i] == '1' ? '0': '1');
            int j = i + 1;
            while(j < s.length() && s[j]!=what) j++;
            if(j == s.length()){
                cout<<0<<endl;
                return;
            }
            break;
        }
    }
    int suf0 = 0,suf1 = 0;
    for(int i=0;i<s.length();i++){
        suf0+=(!(s[i] - '0'));
        suf1+=(s[i] - '0');
    }
    int ans = min(suf0,suf1);
    int pref0 = 0,pref1 = 0;
    for(int i=0;i<s.length();i++){
        // Each level find the required steps;
        pref1+=(s[i] - '0'),suf1-=(s[i] - '0');
        pref0+=(!(s[i] - '0')),suf0-=(!(s[i] - '0'));
        // How many 1's needed to turned to 0
        // And how many last 0's needed to turn 1
        ans = min(ans, pref0 + suf1);
        // How many 0's needed to turn to 1
        // And how many last 1's needed to turn 0
        ans = min(ans, pref1 + suf0);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}