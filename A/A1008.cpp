#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    bool no = false;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'n'){
            continue;
        }
        if( s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            if(i < s.length() - 1 && (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')){
                continue;
            }else{
                no = true;
                break;
            }
        }
    }
    cout<<(no ? "NO":"YES");
}