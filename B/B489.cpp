#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    vector<int> v0(m, 0);
    for(int i=0;i<m;i++){
        cin>>v0[i];
    }
    int ans = 0;
    sort(v.begin(), v.end());
    sort(v0.begin(), v0.end());
    vector<bool> done (n, false);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!done[j] && (abs(v0[i] - v[j]) <= 1)){
                ans++;
                done[j] = true;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}