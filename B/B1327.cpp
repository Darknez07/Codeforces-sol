#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast,O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops,O3")
using namespace std;
int main(){
    int t,n,len,pr;
    bool found;
    cin>>t;
    while(t--){
        cin>>n;
        vector<bool> done(n + 1, false);
        vector<int> assigned(n+1, -1);
        for(int i=1;i<=n;i++){
            cin>>len;
            found = false;
            for(int j=0;j<len;j++){
                cin>>pr;
                if(!done[pr] && !found){
                    done[pr] = true;
                    found = true;
                    assigned[i] = pr;
                }
            }
        }
        int i;
        for(i=1;i<=n;i++){
            if(assigned[i] == -1)
                break;
        }
        if(i > n){
            cout<<"OPTIMAL"<<endl;
            continue;
        }
        for(int x=1;x<=n;x++){
            if(!done[x]){
                done[x] = true;
                assigned[i] = x;
                break;
            }
        }
        cout<<"IMPROVE"<<endl;
        cout<<i<<" "<<assigned[i]<<endl;
    }
    return 0;
}