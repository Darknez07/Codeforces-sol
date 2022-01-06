#include <iostream>
#include <vector>
using namespace std;
int main(){
    int d,sum,summer = 0,max_sum = 0;
    cin>>d>>sum;
    vector<int> mins(d, 0),maxs(d, 0),ans(d, 0);
    // Mins intially;
    for(int i=0;i<d;i++){
        cin>>mins[i]>>maxs[i];
        max_sum+=maxs[i];
        summer+=mins[i];
        ans[i] = mins[i];
    }
    // Not possible
    if(max_sum < sum || summer > sum){
        cout<<"NO"<<endl;
        return 0;
    }
    int i =0;
    while(summer < sum){
        // How awesome whether we can still take the max;
        // We sure can because summer has already the last
        // Minimum in the input.
        if(summer + (maxs[i] - mins[i]) <= sum){
            // Taking max at each step
            summer+=(maxs[i] - mins[i]);
            ans[i] = maxs[i];
        }else{
            // Then taking the left out stuff
            ans[i]+=(sum - summer);
            summer+=(sum + 100);
        }
        i++;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<d;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}