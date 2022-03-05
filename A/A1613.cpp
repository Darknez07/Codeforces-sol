#include <iostream>
using namespace std;
#define ll long long
void solve(){
    ll x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    ll l = min(p1,p2);
    p1-=l,p2-=l;
    // 10^(>=7) it cannot be covered;
    if(p1 >= 7)
        cout<<">"<<endl;
    else if(p2 >= 7)
        cout<<"<"<<endl;
    else{
        // Find the number;
        // Only 6 times at max;
        for(int i=0;i<p1;i++) x1*=10;
        for(int i=0;i<p2;i++) x2*=10;
        if(x1 > x2)
            cout<<">"<<endl;
        else if(x1 < x2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}