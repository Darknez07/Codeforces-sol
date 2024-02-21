#include <iostream>
#include <string>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(n == 1){
        cout<<(s == "@" ? "1\n": "0\n");
        return;
    }
    if(n == 2){
        cout<<((s[1] == '@') + (s[0] == '@'))<<"\n";
        return;
    }
    int count = 0,coins = 0;
    for(int i=1;i<n;i++){
        if(s[i] == '@')
            coins++;
        else if(s[i] == '*' && i < n - 1 && s[i + 1] == '.')
            i++;
        else if(s[i] == '*' && i < n - 1 && s[i + 1] == '*'){
            cout<<coins<<"\n";
            return;
        }
    }
    cout<<coins<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}