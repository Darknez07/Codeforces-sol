#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,val,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n + 1, 0);
        for(int i=0;i<n;i++){
            cin>>val;
            v[val]++;
        }
        ans = -1;
        for(int s = 2;s<=(2*n);s++){
            int curr = 0;
            for(int i=1;i<(s+1)/2;i++){
                // If s - i > n which is clear
                if(s - i > n) continue;
                // Now we can make only min number of s
                // Example let's say s = 5, (3, 2),(1,4)
                // Thus if 3->2, 2->3 so only 2 5's can be made
                // Thus elimenates 3->0, 2->3 0 5's.
                curr+= min(v[i], v[s - i]);
            }
            // If even we know the (3,3) for 6 is possible
            if(s % 2 == 0) curr+=(v[s/2]/2);
            // And max is the needed one;
            ans = max(ans, curr);
        }
        cout<<ans<<endl;
    }
    return 0;
}