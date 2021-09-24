#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t,n,prev;
    cin>>t;
    long long ans = 0;
    for(int i=0; i<t; i++){
        cin>>n;
        if(i == 0){
            ans = n + 1;
            prev = n;
            continue;
        }
        ans+=(abs(n - prev) + 2);
        prev = n;
    }
    cout<<ans<<endl;
    return 0;
}