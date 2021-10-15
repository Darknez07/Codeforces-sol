#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int indx = -1;
    for(int i=0;i<s.length();i++){
        if(s[i] == '0'){
            indx = i;
            break;
        }
    }
    if(indx == -1){
        cout<<s.substr(0, s.length()-1)<<endl;
    }else{
        cout<<s.substr(0, indx) + s.substr(indx + 1, s.length())<<endl;
    }
    return 0;
}