#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,k,x,y,sum,cum;
    bool ok;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<pair<int, int> > v(n);
        for(int i=0;i<n;i++){
            cin>>x>>y;
            v[i] = make_pair(x, y);
        }
        sum = 0;
        ok = false;
        for(int i=0;i<n;i++){
            cum = 0;
            for(int j=0;j<n;j++){
                sum = 0;
                sum+=abs(v[j].first - v[i].first);
                sum+=abs(v[j].second - v[i].second);
                sum-=k;
                if(sum > 0)
                    break;
                cum++;
            }
            if(cum == n){
                ok = true;
                break;
            }
        }
        if(ok){
            cout<<1<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}