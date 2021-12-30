#include <iostream>
#define ll long long
using namespace std;
int main(){
    ll n,m,s,mod;
    cin>>n>>m;
    if(m == 1)
        cout<<(n*(n-1)/2)<<" "<<(n*(n-1)/2)<<endl;
    else if(n == m)
        cout<<0<<" "<<0<<endl;
    else{
        s = n/m;
        mod = n%m;
        s = ((s+1)*s/2)*mod + (m - mod)*(s*(s-1)/2);
        if(n - m == 1)
            s = 1;
        cout<<s<<" "<<(n - m + 1)*(n - m)/2<<endl;
    }
    return 0;
}