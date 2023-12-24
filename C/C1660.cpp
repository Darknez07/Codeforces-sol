#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sz = 26;

void solve(){
    string s;
    cin>>s;
    int n = s.length(),m = 0;
    vector<bool> prev(sz,false);
    for(int i=0;i<n;i++){
        if(prev[s[i] - 'a']){
            m+=2;
            for(int j=0;j<sz;j++) prev[j] = false;
        }
        else prev[s[i] - 'a'] = true;
    }
    cout<<(n - m)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

