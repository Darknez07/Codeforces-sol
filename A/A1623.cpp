#include <iostream>
using namespace std;
int main(){
    int t,n,m,rb,cb,rd,cd;
    cin>>t;
    while(t--){
        cin>>n>>m>>rb>>cb>>rd>>cd;
        if(rd == rb || cd == cb)
            cout<<0<<endl;
        else if(rb > rd){
            if(cb > cd)
                cout<<min(2*n - rb - rd,2*m - cb - cd)<<endl;
            else
                cout<<min(2*n - rd - rb, cd - cb)<<endl;
        }else{
            if(cb > cd)
                cout<<min(rd - rb,2*m - cb - cd)<<endl;
            else
                cout<<min(rd - rb, cd - cb)<<endl;
        }
    }
    return 0;
}