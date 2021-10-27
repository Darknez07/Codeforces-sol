#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t,n,prox;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n + 1);
        vector<int> vn(n);
        vector<int> ans;
        prox = n;
        for(int i=0;i<n;i++){
            cin>>vn[i];
            v[vn[i]] = i;
        }
        while(n > 0){
        if(v[n] == -1){
            n--;
            continue;
        }
        for(int i = v[n];i<n;i++){
            if(v[vn[i]] == -1)
                continue;
            ans.push_back(vn[i]);
            v[vn[i]] = -1;
        }
        n--;
        }
        for(int i=0;i<prox;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}