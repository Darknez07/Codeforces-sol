#include <iostream>
#include <map>
#include <vector>
using namespace std;
    
void solve(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    map<int,int> counter;
    for(int i=0;i<n;i++){
        cin>>v[i];
        counter[v[i]]++;
    }
    for(auto x: counter){
        if(x.second < 2){
            cout<<-1<<endl;
            return;
        }
    }
    int pos = 1;
    for(int i=0;i<n - 1;i++){
        if(v[i] == v[i + 1])
            cout<<(i+2)<<" ";
        else{
            cout<<pos<<" ";
            pos = i + 2;
        }
    }
    cout<<pos<<endl;
}
    
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}