#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll n,r,l = 1,res,t;
    cin>>t;
    while(t--){
        res = 0;
        cin>>n>>r;
        if(n <= l){cout<<1<<endl;continue;}
        if(n <= r){r = n - 1;res = 1;}
        // We sum up till r and if r is >= n
        // Then n - 1
        cout<<(res + (((l+r)*(r - l + 1))/2))<<endl;
    }
    return 0;
}