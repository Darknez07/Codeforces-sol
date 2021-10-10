#include <iostream>
#include <vector>
// Not understood
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i] >= 0 && i % 2 == 1){
                v[i] = -v[i];
            }else if(v[i] <= 0 && i % 2 == 0){
                v[i] = -v[i];
            }
        }
        for(int i=0; i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}