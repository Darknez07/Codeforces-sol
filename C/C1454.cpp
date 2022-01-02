#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,v,ans,first,last,out;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,vector<int>> m;
        for(int i=0;i<n;i++){
            cin>>v;
            m[v].push_back(i + 1);
        }
        ans = 0;
        if(m.size() == 1){
            cout<<0<<endl;
            continue;
        }
        if(m.size() == n){
            cout<<1<<endl;
            continue;
        }
        out = INT_MAX;
        for(auto x: m){
            first = 0;
            ans = 0;
            for(int i=0;i<x.second.size();i++){
                ans+=((x.second[i] - first) > 1 ? 1: 0);
                first = x.second[i];
            }
            ans+=((n - first) > 0 ? 1: 0);
            out = min(ans,out);
        }
        cout<<out<<endl;
    }
    return 0;
}