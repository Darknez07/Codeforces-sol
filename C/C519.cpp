#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(min(n,m)*2 < max(m,n)){
        cout<<min(n,m)<<endl;
        return 0;
    }
    cout<<(n + m)/3<<endl;
}