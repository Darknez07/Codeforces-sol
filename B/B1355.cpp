#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
    ll val,group,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 1){
            cin>>val;
            cout<<1<<endl;
            continue;
        }
        vector<ll> counter(n + 1, 0);
        for(int i=0; i<n; i++){
            cin>>val;
            counter[val]++;
        }
        group = 0;
        for(int i=1;i<=n;i++){
            group+=(counter[i]/i);
            if(i < n)
                counter[i+1]+=(counter[i]%i);
        }
        cout<<group<<endl;
    }
    return 0;
}