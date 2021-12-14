#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    return a == 0 ? b: gcd(b % a, a);
}
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n, 0);
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mn = min(mn, v[i]);
        }
        int prev = -1;
        // Intellegient people know min is prob
        // But geniuses know that gcd will help to
        // attain maximum k for every one
        // Such that they can attain a common ground
        for(int i=0;i<n;i++){
            if(v[i] == mn)
                continue;
            if(prev == -1){
                prev = (v[i] - mn);
            }else{
                prev = gcd(prev, v[i] - mn);
            }
        }
        cout<<prev<<endl;
    }
    return 0;
}