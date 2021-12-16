#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,ones = 0, zeros = 0;
    cin>>n;
    vector<int> v(n, 0);
    vector<int> gains(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        // Gains on the array
        gains[i] = (v[i] == 0 ? 1: -1);
        // If v[i] is 0 we have a gain
        // else we have loss
        // Because we want 1's after flippings
    }
    if(n == 1){
        cout<<(v[0] == 0 ? 1: 0)<<endl;
        return 0;
    }
    int max_sum = 0,this_sum = 0,start = 0,end = 0;
    for(int i=0,j=0;i<n;i++){
        this_sum+=gains[i];
        if(this_sum > max_sum){
            // Max sum (subsequent greater sum)
            max_sum = this_sum;
            // Start is the j
            start = j;
            // End is now
            end = i;
        }else if(this_sum < 0){
            // Restart from here
            j = i + 1;
            // Start is indexed
            this_sum = 0;
        }
    }
    // Start and end
    for(;start<=end;start++)
        // Convert
        v[start] = 1 - v[start];
    int ans = 0;
    for(int i=0;i<n;i++)
        // Count all 1s by sum;
        ans+=v[i];
    cout<<ans<<endl;
    return 0;
}