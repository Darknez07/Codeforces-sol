#include <iostream>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll ans = 1;
    for(int i=1;i<n;i++){
        if(i*2 == n)
            continue;
        ans*=i;
    }
    cout<<ans<<"\n";
    return 0;
}