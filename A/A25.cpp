#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,i;
    int parity[2] = {0,0};
    cin>>t;
    vector<int> v(t, 0);
    for(i=0;i<t;i++){
        cin>>v[i];
        parity[v[i] % 2]++;
    }
    if(parity[0] == 1){
        for(i=0;i<t;i++){
            if(v[i] % 2 == 0)
                break;
        }
        cout<<(i+1)<<endl;
    }else{
        for(i=0;i<t;i++){
            if(v[i] % 2 == 1)
                break;
        }
        cout<<(i+1)<<endl;
    }
    return 0;
}