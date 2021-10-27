#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int layers = 0;
        for(int i = n - 1;i>=0;i--){
            if(layers){
                dp[i] = 1;
                layers--;
                if(layers < v[i]){
                    layers = v[i] - 1;
                }
            }else if(v[i]!=0){
                layers = v[i] - 1;
                dp[i] = 1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
}