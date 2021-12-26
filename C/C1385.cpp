#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,pos;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        pos = n - 1;
        // Simply compare
        while(pos > 0 && v[pos - 1] >= v[pos]) pos--;
        // Simply compare for pos
        // Skips max (if multiple does not skip)
        while(pos > 0 && v[pos - 1] <= v[pos]) pos--;
        cout<<pos<<endl;
    }
    return 0;
}