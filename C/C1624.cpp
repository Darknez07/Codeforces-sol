#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    ll t,n;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<bool> done(n + 1, 0);
        for(int i=0;i<n;i++){
            while(v[i]){
                if(v[i] <= n && !done[v[i]]){
                    done[v[i]] = true;
                    break;
                }
                v[i]/=2;
            }
        }
        no = false;
        for(int i=1;i<=n;i++){
            if(!done[i]){
                no = true;
                break;
            }
        }
        cout<<(no ? "NO":"YES")<<endl;
    }
    return 0;
}