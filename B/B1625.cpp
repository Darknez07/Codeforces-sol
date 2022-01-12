#include <iostream>
#include <algorithm>
#include <vector>
#pragma GCC optimize("Ofast,O3")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops,O3")
using namespace std;
int main(){
    int t,n,mx;
    cin>>t;
    while(t--){
        cin>>n;
        vector<pair<int,int> > v(n,{0,0});
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second = i;
        }
        sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.first==b.first)
                return a.second < b.second;
            return a.first < b.first;
        });
        mx = -1;
        for(int i=0;i<n-1;i++){
            if(v[i].first == v[i+1].first){
                mx = max(mx,v[i].second + (n - v[i + 1].second));
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}