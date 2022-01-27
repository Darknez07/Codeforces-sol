#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    int n,m,mx = -1,mn = 10000,val,mnb = 10000;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>val;
        mx = max(mx, val);
        mn = min(mn, val);
    }
    for(int i=0;i<m;i++){
        cin>>val;
        mnb = min(mnb, val);
    }
    mx = max(mx, 2*mn);
    if(mnb <= mx)
        cout<<-1<<endl;
    else
        cout<<mx<<endl;
    return 0;
}