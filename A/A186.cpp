#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int once = 0;
    if(s1.length() != s2.length()){
        cout<<"NO";
        return 0;
    }
    int a[26] = {};
    for(int i=0; i<s1.length(); i++){
        a[s1[i] - 'a']++;
    }
    for(int i=0; i<s2.length(); i++){
        a[s2[i] - 'a']--;
    }
    bool no = false;
    for(int i=0; i<26; i++){
        if(a[i] !=0){
            no =true;
            break;
        }
    }
    if(no){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i])
            continue;
        once++;
    }
    cout<<(once == 2 ? "YES":"NO")<<endl;
    return 0;
}