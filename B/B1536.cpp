#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s,tem,test;
    char ch;
    while(t--){
        cin>>n>>s;
        tem = "";
        for(int i=0;i<26;i++)
            if(s.find('a' + i) == string::npos){
                tem+=('a' + i);
                break;
            }
        if(!tem.empty()){cout<<tem<<endl;continue;}
        // O(26*26*26)
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                test = "";
                test+=('a' + i);
                test+=('a' + j);
                if(s.find(test) == string::npos){
                    tem = test;
                    break;
                }
            }
            if(!tem.empty())
                break;
        }
        if(!tem.empty()){cout<<tem<<endl;continue;}
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                for(int k=0;k<26;k++){
                    test = "";
                    test+=('a' + i);
                    test+=('a' + j);
                    test+=('a' + k);
                    if(s.find(test) == string::npos){
                        tem = test;
                        break;
                    }
                }
                if(!tem.empty())
                    break;
            }
            if(!tem.empty())
                break;
        }
        cout<<tem<<endl;
    }
    return 0;
}