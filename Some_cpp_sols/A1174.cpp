#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    map<int, int> v;
    bool yes = false;
    for(int i=1;i<=(2*n);i++){
        cin>>t;
        v[t]++;
    }
    if(v.size() == 1){
        cout<<-1;
    }else{
        for(auto x: v){
            while(x.second--){
                cout<<x.first<<" ";
            }
        }
    }
    return 0;
}