#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,sum,score,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        score = -1;
        ans = 0;
        for(int i=n - 1;i>=0;i--){
            sum = v[i] + i + 1;
            if(sum > n){
                score = v[i];
            }else{
                score = v[i];
                while(sum <= n){
                    score+=(v[sum - 1]);
                    sum+=(v[sum - 1]);
                }
                v[i] = score;
            }
            ans = max(score, ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}