#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s.length() != t.length()){
        cout<<"No";
        return 0;
    }
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
                continue;
            }else{
                cout<<"No";
                return 0;
            }
        }else{
            if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}