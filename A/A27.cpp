#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    vector<int> v(3002, false);
    for(int i=0; i<n; i++){
        cin>>val;
        v[val] = true;
    }
    for(int i=1;i<=3002;i++){
        if(!v[i]){cout<<i<<endl;return 0;}
    }
    return 0;
}