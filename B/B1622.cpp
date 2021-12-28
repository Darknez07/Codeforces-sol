#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int t,n,x,cn;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0),ans(n, 0),counter(n + 1, 0),not_c(n + 1,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>s;
        x = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                counter[v[i]] = i + 1;
                x++;
            }else{
                not_c[v[i]] = i + 1;
            }
        }
        if(x == n){
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        x = n - x;
        cn = n;
        for(int i=n;i>=1;i--){
            if(counter[i]){
                ans[counter[i] - 1] = cn;
                cn--;
            }else{
                ans[not_c[i] - 1] = x;
                x--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}