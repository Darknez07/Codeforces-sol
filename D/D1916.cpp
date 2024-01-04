#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
#define ull unsigned long long

void solve(){
    map<int,vector<string>> m = {{3,vector<string> {"196","169","961"}}};
    int n;
    cin>>n;
    if(n == 1){
        cout<<1<<"\n";
        return;
    }
    if(n == 3){
        cout<<196<<"\n"<<169<<"\n"<<961<<"\n";
        return;
    }
    // 103 and 301 op's
    // 13^2*(10^2)^k and 31^2*(10^2)^k
    // Too OP to check
    for(int i=3;i<=(n - 2);i+=2){
        for(string s: m[i]){
            m[i+2].push_back(s + "00");
        }
        m[i+2].push_back("1" + string(i/2,'0') + "6" + string(i/2,'0') + "9");
        m[i+2].push_back("9" + string(i/2,'0') + "6" + string(i/2,'0') + "1");
    }
    for(string s: m[n]){
        cout<<s<<"\n";
    }
    m.clear();
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}