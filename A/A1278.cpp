#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t;
    string s,h,sub;
    bool yes,nxt;
    cin>>t;
    while(t--){
        cin>>s>>h;
        if(s.length() > h.length()){
            cout<<"NO"<<endl;
            continue;
        }
        yes = false;
        vector<int> v(26, 0),temp;
        for(int i=0;i<s.length();i++){
            v[s[i] - 'a']++;
        }
        for(int i=0;i<(h.length() - s.length() + 1);i++){
            sub = h.substr(i,s.length());
            temp = v;
            nxt = false;
            for(int i=0;i<s.length();i++){
                if(temp[sub[i] - 'a'] == 0){
                    nxt = true;
                    break;
                }
                temp[sub[i] - 'a']--;
            }
            if(nxt)
                continue;
            yes = true;
            break;
        }
        cout<<(yes ? "YES":"NO")<<endl;
    }
    return 0;
}