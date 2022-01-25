#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll y,k,n,x;
    cin>>y>>k>>n;
    x = k - y%k;
    if(x + y > n){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=x;i<=(n - y);i+=k)
        cout<<i<<" ";
    return 0;
}