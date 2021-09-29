#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    string s1,s2;
    map<string, string> m;
    vector<string> s;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        m[s2] = s1;
    }
    for(int i=0;i<l;i++){
        cin>>s1>>s2;
        s2 = s2.substr(0,s2.length() - 1);
        s.push_back(s1+" "+s2+"; #"+m[s2]);
    }
    for(int i=0;i<l;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}