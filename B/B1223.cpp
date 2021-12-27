#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int t;
    string s,tn;
    bool yes;
    cin>>t;
    while(t--){
        cin>>s>>tn;
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]] = 1;
        }
        yes = false;
        for(int i=0;i<tn.length();i++){
            if(m[tn[i]] == 1){
                yes = true;
                break;
            }
        }
        cout<<(yes ? "YES" : "NO")<<endl;
    }
    return 0;
}