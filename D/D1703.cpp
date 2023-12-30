#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<string> v(n);
    map<string, bool> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]] = true;
    }
    string pref, suff;
    for(int i=0;i<n;i++){
        int k = 0;
        for(int j=0;j<v[i].length();j++){
            pref = v[i].substr(0,j);
            suff = v[i].substr(j);
            if(m[pref] && m[suff]){
                k = 1;
                break;
            }
        }
        cout<<k;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}