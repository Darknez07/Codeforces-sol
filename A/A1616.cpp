#include <iostream>
#include <set>
using namespace std;
int main(){
    int t,n,val;
    cin>>t;
    while(t--){
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>val;
            if(s.find(val) != s.end()){
                s.insert(-val);
            }else{
                s.insert(val);
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}