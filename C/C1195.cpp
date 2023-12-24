#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main(){
    int n,num;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<2;i++){
        v.push_back(vector<int> ());
        for(int j=0;j<n;j++){
            cin>>num;
            v[i].push_back(num);
        }
    }
    pair<ll,ll> d = {0,0};
    for(int i=0;i<n;i++){
        pair<ll,ll> agla = {max(d.first,d.second + v[0][i]), max(d.second, d.first + v[1][i])};
        d = agla;
    }
    cout<<max(d.first,d.second)<<endl;
}