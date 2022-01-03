#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
    int t,n,val;
    ll count = 0;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(2*n + 1, 0);
        for(int i=0;i<n;i++){
            cin>>val;
            v[val] = i + 1;
        }
        count = 0;
        for(ll i=3;i<=(2*n - 1);i++){
            for(ll j=1;j*j<i; j++)
                if((i % j == 0) && v[i/j] && v[j] &&  (v[j] + v[i/j] == i)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}