#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n, 0);
    ll score = 0;
    for(auto &x: v) cin>>x;
    sort(v.rbegin(),v.rend());
    vector<int> arr1,arr2;
    for(int i=0;i<k;i++)
        arr1.push_back(v[i]);
    for(int i=k;i<2*k;i++){
        arr2.push_back(v[i]);
    }
    for(int i=0;i<k;i++)
        score+=(arr2[i]/arr1[i]);
    for(int i=2*k;i<n;i++)
        score+=v[i];
    cout<<score<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}