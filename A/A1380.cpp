#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,i;cin>>t;bool done;while(t--){cin>>n;vector<long> v(n,0);for(int i=0;i<n;i++){cin>>v[i];}done=false;for(i=1;i<n-1;i++){if(v[i] > v[i - 1] && v[i] > v[i+1]){done=true;break;}}if(done){cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<"\n";}else{cout<<"NO\n";}}
    return 0;
}