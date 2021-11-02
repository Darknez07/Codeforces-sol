#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll t,a,b,n,d,r;
    cin>>t;
    while(t--){cin>>a>>b>>n;d = (b*n + n - a)/(a - 1) + 1;r = a + (a - 1)*(d - 1) - b*n;if(r < n){d++;}cout<<(d + n)<<endl;}
    return 0;
}