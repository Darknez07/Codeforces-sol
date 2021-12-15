#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    long n,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long> v(k, 0);
        for(int i=0; i<k; i++){
            cin>>v[i];
            v[i]=(n - v[i]);
        }
        sort(v.begin(), v.end());
        int i;
        ans = 0;
        for(i=0;i<k;i++){
            // Take all mice until the
            // Cat comes;
            // So when cat reaches end
            // Good mice i.e. near to hole will run;
            if((ans + v[i]) >= n)
                break;
            // If cat has  >=n  every mice will be eaten
            // Meaning rest of the mice will be eaten
            ans+=v[i];
        }
        // Point being even if there is a gap of 1 in cat and mouse
        // The mouse will run away to hole like EZ.
        cout<<i<<endl;
    }
    return 0;
}