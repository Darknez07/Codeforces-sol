#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;
int main(){
    int n, k;
    string s;
    cin>>n>>k>>s;
    map<char,int> m;
    set<char> v;
    char ch;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    for(auto x: m){
        if((k - x.second) < 0){
            ch = x.first;
            break;
        }
        k-=x.second;
        v.insert(x.first);
        x.second = 0;
    }
    string nf = "";
    for(int i=0;i<n;i++){
        if(v.count(s[i]))
            continue;
        if(k && s[i] == ch){k--;continue;}
        nf+=s[i];
    }
    cout<<nf<<endl;
}