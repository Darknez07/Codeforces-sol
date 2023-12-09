#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Selection is 7.75 times faster than bubble
// 1450ms to 187ms
// ..... speechless.

void bad_sort(vector<int> &v,vector<int> &v2,int n,vector<pair<int,int>> &res){
    for(int i=n - 1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(v[i] < v[j]){
                swap(v[i],v[j]);
                swap(v2[i],v2[j]);
                res.push_back(make_pair(i + 1, j + 1));
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0),b(n,0);
    vector<pair<int,int>> res;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bad_sort(a,b,n,res);
    bad_sort(b,a,n,res);
    if(is_sorted(a.begin(),a.end()) && is_sorted(b.begin(),b.end())){
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            cout<<res[i].first<<" "<<res[i].second<<endl;
        }
        return;
    }
    cout<<-1<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}