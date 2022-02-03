#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long
int main(){
    int n,val;
    cin>>n;
    map<int,int> m;
    vector<pair<int,int>> v;
    vector<ll> maxed(111111, 0);
    for(int i=0;i<n;i++){
        cin>>val;
        m[val]++;
    }
    for(auto it = m.begin();it!=m.end();++it){
        v.push_back(make_pair(it->first,it->second));
    }
    for(int i =0;i<v.size();i++){
        int pr = i - 1;
        // 1 1 1 1 2 2 2 2 2 3 3
        // (1,3),(2,5),(3,2)
        // i = 1, pr = 0
        // pr = -1, maxed[1] = 2*5
        // i = 2, pr = 1
        // pr = 0, maxed[2] = maxed[0] + 3*2 => 0 + 6
        // maxed[2] = max(maxed[1],maxed[2]) => (6, 10)
        // maxed[2] = 10,
        // maxed array
        // 0, 10, 10
        // Removing all the 2's will have benift
        if(pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        if(pr == -1) maxed[i] = 1ll * v[i].first * v[i].second;
        else maxed[i] = maxed[pr] + 1ll*v[i].first * v[i].second;
        if(i) maxed[i] = max(maxed[i],maxed[i - 1]);
        cout<<maxed[i]<<endl;
    }
    cout<<maxed[v.size() - 1]<<endl;
    for(int i=0;i<v.size();i++)
        cout<<maxed[i]<<" ";
    cout<<endl;
    return 0;
}