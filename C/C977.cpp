#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    ll n,k,s,count;
    cin>>n>>k;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(k == 0){
        if(v[0] <= 1)
            cout<<-1<<endl;
        else
            cout<<(v[0] - 1)<<endl;
        return 0;
    }
    s = v[k - 1];
    count = 0;
    for(int i=0;i<n;i++){
        if(s >= v[i])
            count++;
    }
    if(count == k)
        cout<<s<<endl;
    else
        cout<<-1<<endl;
    return 0;
}