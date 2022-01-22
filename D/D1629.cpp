#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int n;
string s,rev;
void solve(){
    cin>>n;
    vector<string> v(n, "");
    multiset<string> suf,pre;
    for(int i=0;i<n;i++){
        cin>>v[i];
        suf.insert(v[i]);
    }
    for(int i=0;i<n;i++){
        suf.erase(suf.find(v[i]));
        rev = v[i];
        reverse(rev.begin(),rev.end());
        if(rev == v[i]){
            cout<<"YES"<<endl;
            return;
        }
        if(suf.count(rev)){
            cout<<"YES"<<endl;
            return;
        }
        if(v[i].length() == 3){
            rev = v[i].substr(0,2);
            reverse(rev.begin(),rev.end());
            if(suf.count(rev)){
                cout<<"YES"<<endl;
                return;
            }
            // if the last 2 chars
            // are same as some value;
            rev = v[i].substr(1,2);
            reverse(rev.begin(),rev.end());
            if(pre.count(rev)){
                cout<<"YES"<<endl;
                return;
            }
        }
        pre.insert(v[i]);
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}