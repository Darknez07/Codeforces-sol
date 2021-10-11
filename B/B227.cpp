#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    long long val;
    cin>>n;
    vector<long long> v(n + 1);
    for(long long i=0;i<n;i++){
        cin>>val;
        v[val] = i;
    }
    int t;
    long long look;
    cin>>t;
    long long V = 0,P = 0;
    while(t--){
        cin>>look;
        V+=(v[look] + 1);
        P+=(n - v[look]);
    }
    cout<<V<<" "<<P<<endl;
    return 0;
}