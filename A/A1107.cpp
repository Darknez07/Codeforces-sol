#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int len,t;
    cin>>t;
    while(t--){
        cin>>len;
        cin>>s;
        if(s.length() == 2 && s[0] >= s[1]){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES\n"<<2<<endl;
        cout<<s[0]<<" "<<s.substr(1,len)<<endl;
    }
    return 0;
}