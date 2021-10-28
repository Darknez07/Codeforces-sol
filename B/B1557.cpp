#include <iostream>
#include <vector>
#include <algorithm>
// Question: Why not count all subarrays which are already sorted ?
// Answer: Let's take the case [6,5,1,3,2,4]
// By using increasing subarray method we get 4 as answer
// But actually the answer is 6
// Because real sorted is [1 2 3 4]
// By running below program with 6 x{where x:[1,6]}
// We get 6 as answer to Yes
using namespace std;
int main(){
    int t,n,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<pair<int,int> > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second = i;
        }
        // Sort to find the positions
        // of sorted array and compare pos
        sort(v.begin(),v.end());
        ans = 1;
        // One element is always disarranged
        for(int i=1;i<n;i++)
        // Counting Disarrangements
        // So that we get what sub arrays to sort
        // So single out subarrays
            if(v[i - 1].second + 1 != v[i].second)
                ans++;
            // Checking two elements togather
            // SO finding minimum sub arrays
        cout<<(ans <= k ? "Yes":"No")<<endl;
    }
    return 0;
}