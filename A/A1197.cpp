#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,val,m,m1;
    cin>>t;
    while(t--){
        cin>>n;
        m = -1;
        m1 = -1;
        for(int i=0;i<n;i++){
            cin>>val;
            if(val > m){
                m1 = m;
                m = val;
            }else if(val > m1){
                m1 = val;
            }
        }
        int base = min(m, m1) - 1;
        int steps = n - 2;
        if(steps > base){
            cout<<base<<endl;
        }else{
            cout<<steps<<endl;
        }
    }
    return 0;
}