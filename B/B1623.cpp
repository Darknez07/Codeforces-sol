#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>> v(n, vector<int>(2, 0));
        vector<bool> done(n + 1, false);
        for(int i=0;i<n;i++){
            cin>>v[i][0]>>v[i][1];
        }
        sort(v.begin(),v.end(),[](vector<int> v1,vector<int> v2){
            return (v1[1] - v1[0]) < (v2[1] - v2[0]);
        });
        cout<<endl;
        for(int i=0;i<n;i++){
            if(v[i][0] == v[i][1]){
                cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][1]<<endl;
                done[v[i][1]] = true;
                continue;
            }
            ans = 0;
            for(int j=v[i][0];j<=v[i][1];j++){
                if(done[j])
                    continue;
                ans = j;
            }
            done[ans] = true;
            cout<<v[i][0]<<" "<<v[i][1]<<" "<<ans<<endl;
        }
        cout<<endl;
    }
    return 0;
}