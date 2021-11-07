#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    long val;
    while(t--){
        cin>>n;
        vector<int> v(3,0);
        for(int i=0;i<n;i++){
            cin>>val;
            v[val % 3]++;
        }
        int l = min(v[2], v[1]);
        v[2]-=l;
        v[1]-=l;
        if(v[1] == 0)
            l+=(v[2]/3);
        if(v[2] == 0)
            l+=(v[1]/3);
        l+=v[0];
        cout<<l<<endl;
    }
    return 0;
}