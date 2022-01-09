#include <iostream>
#include <set>
#pragma GCC optimize("Ofast,O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops,O3")
using namespace std;
int main(){
    int t,n,l,ans;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> v;
        for(int i=0;i<n;i++){
            cin>>l;
            v.insert(l);
        }
        ans = -1;
        for(int i=1;i<=1024;i++){
            no = false;
            for(auto x: v){
                if(v.find(i^x) == v.end()){
                    no = true;
                    break;
                }
            }
            if(!no){
                ans = i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}