#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k,val;
    cin>>n>>k;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(make_pair(val,i + 1));
    }
    sort(v.begin(),v.end());
    int i;
    for(i=0;i<n;i++){
        if((k - v[i].first) >= 0)
            k-=v[i].first;
        else
            break;
    }
    cout<<i<<endl;
    for(int j=0;j<i;j++){
        cout<<v[j].second<<" ";
    }
    return 0;
}