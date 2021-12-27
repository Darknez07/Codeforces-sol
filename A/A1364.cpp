#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,x,l,r,sum,ans,sum1,sum2;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector<int> v(n, 0);
        sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ans = 0;
        if(sum % x){
            cout<<n<<endl;
            continue;
        }
        sum1 = sum;
        for(int i=0;i<n;i++){
            sum1-=v[i];
            if(sum1%x){
                ans = max(ans,n - i - 1);
                break;
            }
        }
        sum2 = sum;
        for(int i=n-1;i>=0;i--){
            sum2-=v[i];
            if(sum2%x){
                ans = max(ans, i);
                break;
            }
        }
        if(ans == 0)
            ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}