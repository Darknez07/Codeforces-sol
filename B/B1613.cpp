#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    // Sort -> get 1 and works
    // sort(v.begin(), v.end());
    int mins = INT_MAX;
    for(int i=0;i<n;i++)
        mins = min(mins, v[i]);
    // Mod works like 0 .... n - 1
    // So if we take the smallest number and patch it to every number
    // voila
    bool yes = false;
    for(int i=0;i<(n/2);i++){
        if(v[i] == mins){
            yes = true;
            continue;
        }
        cout<<v[i]<<" "<<mins<<endl;
    }
    if(yes){
        cout<<v[n/2]<<" "<<mins<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
}