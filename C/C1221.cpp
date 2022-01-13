#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    ll m,c,x,mn,ans;
    cin>>t;
    while(t--){
        cin>>c>>m>>x;
        ans = min(min(c,m),x);
        c-=ans;m-=ans;x-=ans;
        if(!(c == 0 || m == 0)){
            if(c > m)
                ans+=(c/m >=2 ? m:((c + m)/3));
            else
                ans+=(m/c >= 2 ? c: ((m + c)/3));
        }
        cout<<ans<<endl;
    }
    return 0;
}