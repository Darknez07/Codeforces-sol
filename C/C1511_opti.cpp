#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,t,val;
    cin>>n>>t;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>val;
        if(m[val] == 0){
            m[val] = i + 1;
        }
    }
    for(int i=0;i<t;i++){
        cin>>val;
        cout<<m[val]<<" ";
        m[val] = 1;
    }
    return 0;
}