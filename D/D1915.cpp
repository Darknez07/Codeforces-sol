#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>
using namespace std;
map<char,bool> vow = {{'a',1},{'b',0},{'c',0},{'e',1},{'d',0}};


void solve(){
    int n;
    string s;
    cin>>n>>s;
    string ans = "";
    for(int i = n-1;i>=0;i--){
        if(vow[s[i]]){
            ans = "."+s.substr(i - 1, 2) + ans;
            i--;
        }else{
            ans = "."+s.substr(i - 2, 3) + ans;
            i-=2;
        }
    }
    cout<<ans.substr(1,ans.length()-1)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}