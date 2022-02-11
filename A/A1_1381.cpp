#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(){
    int n;
    string s1,s2;
    cin>>n>>s1>>s2;
    if(n == 1){
        if(s1[0] == s2[0])
            cout<<0<<" ";
        else
            cout<<1<<" "<<1<<endl;
        return;
    }
    vector<int> chng;
    for(int i=n - 1;i>=0;i--){
        if(s2[i] != s1[i]){
            chng.push_back(i + 1);
            if(i + 1 > 1){
                chng.push_back(1);
                chng.push_back(i + 1);
            }
        }
    }
    cout<<chng.size()<<" ";
    for(int i=0;i<chng.size();i++)
        cout<<chng[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}