#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int;
using namespace std;
int main(){
    map<vector<int>, int> m;
    int t,f;
    cin>>t>>f;
    for(int i=0; i<t; i++){
        vector<int> v(2, 0);
        cin>>v[0]>>v[1];
        m[v]++;
    }
    vector<vector<int> > fes;
    for(pair<vector<int>,int> x: m){
        vector<int> v(3, 0);
        v[2] = x.second;
        v[0] = x.first[0];
        v[1] = x.first[1];
        fes.push_back(v);
    }
    sort(fes.begin(),fes.end(),[](const vector<int> v1, const vector<int> v2){
        if(v1[0] > v2[0])
            return true;
        else if(v1[0] == v2[0] && v1[1] < v2[1])
            return true;
        else
            return false;
    });
    int pos = 1,ans;
    for(int i=0;i<fes.size();i++){
        if(fes[i][2] > 1){
            if(f >= pos  && f < (pos + fes[i][2])){
                ans = fes[i][2];
                break;
            }
        }else{
            if(pos == f){
                ans = 1;
                break;
            }
        }
        pos+=fes[i][2];
    }
    cout<<ans;
    return 0;
}