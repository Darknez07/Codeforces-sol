#include <iostream>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int start = 0, change = 0;
    for(int i=0;i<n;i++){
        if(i % 2)
            change = change ? 0: 1;
        start = change;
        for(int j=0;j<m;j++){
            if(j % 2)
                start = start ? 0: 1;
            cout<<start<<" ";
        }
        cout<<endl;
    }
    return;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}