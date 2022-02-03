#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > v(n,{0,0});
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    int start = min(v[0].first,v[0].second);
    for(int i=1;i<n;i++){
        if(start <= v[i].first && start <= v[i].second)
            start = min(v[i].first,v[i].second);
        else if(start < v[i].first)
            start = v[i].first;
        else if(start < v[i].second)
            start = v[i].second;
    }
    cout<<start<<endl;
    return 0;
}