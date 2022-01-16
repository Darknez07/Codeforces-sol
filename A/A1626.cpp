#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        vector<int> counter(26, 0);
        for(int i=0;i<s.length();i++){
            counter[s[i] - 'a']++;
        }
        string cross = "",rest = "";
        for(int i=0;i<26;i++){
            if(counter[i] == 2){
                cross+=('a' + i);
            }else if(counter[i]){
                rest+=('a' + i);
            }
        }
        cross+=cross;
        cross+=rest;
        cout<<cross<<endl;
    }
    return 0;
}