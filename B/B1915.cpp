#include <iostream>
#include <string>
using namespace std;

void solve(){
    int a = 3,b = 3, c = 3;
    string s;
    for(int i=0;i<3;i++){
        cin>>s;
        for(int k=0;k<3;k++){
            if(s[k] == 'A')
                a--;
            if(s[k] == 'B')
                b--;
            if(s[k] == 'C')
                c--;
        }
    }
    if(a == 1){
        cout<<'A'<<"\n";
        return;
    }
    if(b == 1){
        cout<<'B'<<"\n";
        return;
    }
    cout<<'C'<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}