#include <iostream>
using namespace std;
int main(){
    long long ans, t, prod;
    long long mod = 1e9 + 7;
    mod*=2;
    cin>>t;
    while(t--){
        cin>>ans;
        ans*=2;
        prod = 1;
        for(long long i=ans;i>=1;i--){
            i%=mod;
            prod*=i;
            prod%=mod;
        }
        prod/=2;
        cout<<prod<<endl;
    }
    return 0;
}