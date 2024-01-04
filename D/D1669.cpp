#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> Tokenize(string s,string del){
    size_t pos = 0;
    string token;
    vector<string> tokens;
    while((pos = s.find(del))!=string::npos){
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + del.length());
    }
    return tokens;
}


void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(n == 1){
        cout<<(s == "W" ? "YES": "NO")<<"\n";
        return;
    }
    if(n == 2){
        cout<<(s == "BR" || s == "RB" || s == "WW" ? "YES": "NO")<<"\n";
        return;
    }
    // Logic is we can't stamp only R's
    // And Only B's 
    // We need both combination
    // BBBR -> WWWW -> BRBR -> BBRR -> BBBR
    s+="W";
    vector<string> v = Tokenize(s,"W");
    for(string p: v){
        if((p.find("B")!=string::npos) ^ (p.find("R")!=string::npos)){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}