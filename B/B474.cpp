#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    long val;
    vector<long> start(n,1);
    vector<long> end(n,0);
    for(int i=0;i<n;i++){
        cin>>val;
        if(i == 0){
            end[i] = val;
            continue;
        }
        start[i] = end[i - 1] + 1;
        end[i] = end[i - 1] + val;
    }
    cin>>m;
    while(m--){
        cin>>val;
        cout<<(upper_bound(start.begin(),start.end(), val) - start.begin())<<endl;
    }
    return 0;
}