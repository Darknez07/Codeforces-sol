#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n,m,sum = 0;
    cin>>n;
    vector<long long> v(n);
    for(long i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    cin>>m;
    long pos;
    for(long i=0;i<m;i++){
        cin>>pos;
        cout<<(sum - v[n - pos])<<endl;
    }
    return 0;
}