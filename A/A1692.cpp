#include <iostream>
using namespace std;

void solve(){
    int a,b,c,d,cnt = 0;
    cin>>a>>b>>c>>d;
    if(a < b)
        cnt++;
    if(a < c)
        cnt++;
    if(a < d)
        cnt++;
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}