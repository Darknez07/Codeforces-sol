#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long a0,a1,a2,b0,b1,b2,ans,n;
    while(t--){
        cin>>a0>>a1>>a2>>b0>>b1>>b2;
        n = min(a2, b1);
        a2-=n;
        b1-=n;
        ans = 2*n;
        n = min(a2, b2);
        a2-=n;
        b2-=n;
        n = min(a0, b2);
        a0-=n;
        b2-=n;
        n = min(a0, b1);
        a0-=n;
        b1-=n;
        n = min(b1, a1);
        b1-=n;
        a1-=n;
        n = min(a0, b0);
        a0-=n;
        b0-=n;
        n = min(a2, b0);
        a2-=n;
        b0-=n;
        n = min(b2, a1);
        b2-=n;
        a1-=n;
        ans-=(2*n);
        cout<<ans<<endl;
    }
    return 0;
}