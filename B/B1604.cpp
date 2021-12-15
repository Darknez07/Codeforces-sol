#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> v(n, 0);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        // IF n is even we can take a single element
        // And 1xor1 even times  is 0
        if(n % 2 == 0){
            cout<<"YES"<<endl;
            continue;
        }
        bool yes = false;
        // Odd n which has a pair of IS(Increasing Subsequence)
        // Which translates to 1 in h array.
        // As 1 in length
        for(int i=0; i<n-1; i++){
            if(v[i + 1]<=v[i]){
                yes = true;
                break;
            }
        }
        // Finally yes and no
        cout<<(yes ? "YES":"NO")<<endl;
    }
    return 0;
}