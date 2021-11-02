#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    long n,k,mex, mx,ans,val;
    while(t--){
        cin>>n>>k;
        mx = -1;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>val;
            m[val] = 1;
            mx = max(val, mx);
        }
        for(int i=0;i<=n;i++){
            if(m[i] == 0){
                mex = i;
                break;
            }
        }
        ans = m.size();
        if(mex < mx && k!=0){
            if(m[(mex + mx + 1)/2] == 0)
                ans++;
        }else if(mx < mex){
            ans+=k;
        }
        cout<<(ans - 1)<<endl;
    }
    return 0;
}