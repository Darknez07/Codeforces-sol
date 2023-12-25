#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
#define ll long long

set<string> st;
void solve2(string s,int n){
    if(!n) return;
    if(n < 2){st.insert(s); return;}
    if(st.find(s)!=st.end()) return;
    st.insert(s);
    if(s[0] == s[1]){
        solve2(s.substr(1),n - 1);
        return;
    }
    solve2(s.substr(1), n - 1);
    solve2(s[0] + (n <= 2 ? "" : s.substr(2)), n - 1);
    return;
}

void solve(){
    int n;
    string s;
    cin>>n>>s;
    map<char,int> m;
    ll cnt = 0;
    for(int i=n-1;i>=0;i--){
        if(!m[s[i]]){
            cnt+=(n - i);
        }else{
            cnt+=(m[s[i]] - i);
        }
        m[s[i]] = i;
    }
    cout<<cnt<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}