#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    ll t,n,ans,mx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        mx = -1;
        even = 0;
        odd = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ans = 0;
        for(int i=0;i<n;i++){
            // Both of them chooses the max
            // They have avialable
            // if Alice turn and it has even number
            // Great bonus
            // if Bob turn and it has odd number
            // Great bonus for Bob
            // We look this through alice's perspective
            if(i % 2 == 0){
                if(v[i] % 2 == 0)
                    ans+=v[i];
            }else{
                if(v[i] % 2 == 1)
                    ans-=v[i];
            }
        }
        cout<<(ans == 0 ? "Tie": (ans > 0) ? "Alice":"Bob")<<endl;
    }
    return 0;
}