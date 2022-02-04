#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    int a[2] = {};
    for(int i=0;i<n;i++){
        cin>>v[i];
        a[v[i]%2]++;
    }
    if(a[0] && a[1])
        sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    // If we have both parities
    // Then we can move that odd element all over the array and sort it
    // By using single odd number swap with even's so swaps;
    return 0;
}