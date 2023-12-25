#include <iostream>
#include <map>
#include <string>
using namespace std;
map<char,int> req;

void solve(){
    int n,solved = 0; 
    string s;
    cin>>n>>s;
    map<char,int> have;
    for(int i=0;i<n;i++){
        have[s[i]]++;
    }
    for(auto k: req){
        if(k.second <= have[k.first])
            solved++;
    }
    cout<<solved<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<26;i++){
        req[i + 'A'] = i + 1;
    }
    while(t--) solve();
    return 0;
}