#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int t,pos;
    ll n,mn;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n, 0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(n == 2){
            cout<<v[0]<<" "<<v[1]<<endl;
            continue;
        }
        mn  = LONG_LONG_MAX;
        for(int i=1;i<n;i++){
            if(mn > abs(v[i] - v[i - 1])){
                mn = abs(v[i] - v[i - 1]);
                pos = i;
            }
        }
        for(int i=pos;i<n;i++)
            cout<<v[i]<<" ";
        for(int i=0;i<pos;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}