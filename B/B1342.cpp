#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,one,zero;
    string s,start;
    cin>>t;
    while(t--){
        one = 0;
        zero = 0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i] == '0'){
                zero++;
            }else{
                one++;
            }
        }
        if(one == 0 || zero == 0){
            cout<<s<<endl;
            continue;
        }
        if(s[0] == '0')
            start = "01";
        else
            start = "10";
        for(int i=0;i<s.length();i++){
            cout<<start;
        }
        cout<<endl;
    }
}