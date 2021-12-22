#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n, 0),lesser,morer,ans;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++){
            lesser.push_back(v[i]);
        }
        for(int i=(n - 1);i>=(n/2 + n%2);i--){
            morer.push_back(v[i]);
        }
        for(int i=((n/2) - 1);i>=0;i--){
            ans.push_back(lesser[i]);
            ans.push_back(morer[i]);
        }
        if(n % 2 == 1){
            int i;
            for(i=1;i<(ans.size() + 1);i++){
                if(ans[i - 1] <= v[n/2] && ans[i] >= v[n/2]){
                    break;
                }
            }
            ans.insert(ans.begin() + i - 1, v[n/2]);
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}