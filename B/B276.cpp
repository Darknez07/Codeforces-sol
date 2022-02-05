#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length() == 1){cout<<"First"<<endl;return 0;}
    if(s.length() == 2){cout<<(s[0] == s[1] ? "First": "Second")<<endl;return 0;}
    vector<int> v(26, 0);
    for(int i=0;i<s.length();i++){
        v[s[i] - 'a']++;
    }
    int mx = -1,ans = 0;
    for(int i=0;i<26;i++){
        if(v[i] % 2 == 0) continue;
        else if(mx < v[i]){
            mx = v[i];
        }
    }
    bool once = false;
    for(int i=0;i<26;i++){
        if(v[i] % 2 && mx != v[i]){
            ans++;
        }
        if(mx == v[i] && !once){
            once = true;
        }else if(mx == v[i] && once){
            ans++;
        }
    }
    cout<<(ans % 2 ? "Second": "First")<<endl;
    return 0;
}