#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
// Only stacks
// God level stacks

void solve(){
    string s;
    char ch;
    stack<pair<int,char>> caps,smalls;
    cin>>s;
    for(int i=0;i<s.size();i++){
        ch = s[i];
        if(ch == 'B'){
            if(caps.empty()) continue;
            caps.pop();
            continue;
        }
        if(ch == 'b'){
            if(smalls.empty()) continue;
            smalls.pop();
            continue;
        }
        if('A' <= ch  && ch <= 'Z'){
            caps.push(make_pair(i,ch));
        }else{
            smalls.push(make_pair(i,ch));
        }
    }
    stack<pair<int,char>> revsmall,revcaps;
    while(!smalls.empty() && !caps.empty()){
        if(smalls.top().first < caps.top().first){
            revsmall.push(smalls.top());
            smalls.pop();
        }else{
            revcaps.push(caps.top());
            caps.pop();
        }
    }
    while(!caps.empty()){
        revcaps.push(caps.top());
        caps.pop();
    }
    while(!smalls.empty()){
        revsmall.push(smalls.top());
        smalls.pop();
    }
    while(!revsmall.empty() && !revcaps.empty()){
        if(revsmall.top().first < revcaps.top().first){
            cout<<revsmall.top().second;
            revsmall.pop();
        }else{
            cout<<revcaps.top().second;
            revcaps.pop();
        }
    }
    while(!revcaps.empty()){
        cout<<revcaps.top().second;
        revcaps.pop();
    }
    while(!revsmall.empty()){
        cout<<revsmall.top().second;
        revsmall.pop();
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