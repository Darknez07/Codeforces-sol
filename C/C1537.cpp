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
            // Find index of minimal diferrence
            if(mn > abs(v[i] - v[i - 1])){
                mn = abs(v[i] - v[i - 1]);
                pos = i;
            }
        }
        // First using pos to n as they are sorted in
        // ascending order
        for(int i=pos;i<n;i++)
            cout<<v[i]<<" ";
        // Then 0 to pos - 1 then sort that they are also
        // sorted in ascending order
        for(int i=0;i<pos;i++)
            cout<<v[i]<<" ";
        // So the difference between the first and
        // last is minimum
        cout<<endl;
    }
    return 0;
}