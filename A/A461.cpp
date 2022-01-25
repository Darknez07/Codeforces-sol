#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    ll val;
    vector<ll> v(t, 0),sums(t + 1, 0);
    for(int i=0; i<t;i++){
        cin>>v[i];
    }
    if(t == 1){
        cout<<v[0]<<endl;
        return 0;
    }
    sort(v.rbegin(), v.rend());
    for(int i=0;i<t;i++)
        sums[i + 1] = sums[i] + v[i];
    ll sum = sums[t];
    sum+=sum;
    for(int i=2;i<=(t - 1);i++)
        sum+=sums[i];
    cout<<sum<<endl;
    cout<<endl;
}