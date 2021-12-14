#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,m;
    long xt,ans;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<vector<long> > v(m,vector<long> (2,0));
        ans = 0;
        for(int i=0;i<m;i++){
            cin>>xt;
            v[i][0] = xt;
            v[i][1] = i + 1;
        }
        sort(v.begin(),v.end(),[](const vector<long> a, const vector<long> b){
            if(a[0] == b[0]) return a[1] > b[1];
            else return a[0] < b[0];
        });
        vector<bool> sitting(m + 1);
        sitting[v[0][1]] = true;
        for(int i=1;i<m;i++){
            sitting[v[i][1]] = true;
            for(int j=1;j<v[i][1];j++){
                if(sitting[j])
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}