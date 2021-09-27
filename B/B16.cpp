#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<pair<int, int> > v;
    int n,m,a,b,t;
    cin>>n>>m;
    t = m;
    while(t--){
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    int matches = 0;
    sort(v.begin(),v.end());
    for(int i=m - 1;i>=0;i--){
        if(n - v[i].second <= 0){
            matches+=(n*v[i].first);
            break;
        }else{
            n-=v[i].second;
            matches+=(v[i].second*v[i].first);
        }
    }
    cout<<matches<<endl;
    return 0;
}