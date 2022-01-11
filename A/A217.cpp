#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,x,y;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),[](pair<int,int> a, pair<int,int> b){
        return abs(a.first - b.first) == abs(a.second - b.second);
    });
    int count = 0;
    for(int i=1;i<n;i++){
        if(abs(v[i - 1].first - v[i].first) == 0 || abs(v[i - 1].second - v[i].second) == 0)
            continue;
        else
            count++;
    }
    cout<<count<<endl;
    return 0;
}