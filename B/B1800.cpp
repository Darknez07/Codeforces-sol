#include <iostream>
#include <string>
#include <map>
using namespace std;

void solve(){
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int inter,score = 0;
    for(char x='a';x<='z';x++){
        if(m.count(x) && m[toupper(x)]){
            inter = min(m[toupper(x)],m[x]);
            m[x]-=inter;
            m[toupper(x)]-=inter;
            score+=inter;
        }
    }
    for(auto x: m){
        if(x.second > 1){
            if(k >= (x.second/2)){
                k-=(x.second/2);
                score+=(x.second/2);
            }else{
                score+=k;
                k = 0;
                break;
            }
        }
    }
    cout<<score<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}