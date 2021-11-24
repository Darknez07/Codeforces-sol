#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,indx;
    cin>>n>>m;
    vector<long> v(n+1,0);
    long val,fed;
    for(int i=0;i<m;i++){
        indx = 0;
        vector<long> ts(n, 0);
        cin>>ts[0];
        for(int j=2;j<=n;j++){
            cin>>ts[j - 1];
            if(ts[indx] < ts[j - 1])
                indx = j - 1;
        }
        v[indx + 1]++;
    }
    indx = 0;
    for(int i=1;i<=n;i++){
        if(v[i] > v[indx])
            indx = i;
    }
    cout<<indx<<endl;
    return 0;
}