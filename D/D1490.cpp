#include <iostream>
#include <vector>
using namespace std;
void build(int l,int r, vector<int> v, vector<int> &d,int dep = 0){
    if(r < l)
        return;
    if(r == l){
        d[l] = dep;
        return;
    }
    int m = l;
    for(int i=l+1;i<=r;i++){
        if(v[m] < v[i])
            m = i;
    }
    d[m] = dep;
    build(l,m - 1,v,d,dep+1);
    build(m + 1,r,v,d,dep+1);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> d(n, 0);
        build(0,n - 1, v, d);
        for(int i=0;i<n;i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}