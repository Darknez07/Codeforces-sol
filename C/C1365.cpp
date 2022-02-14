#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n, 0),b(n, 0),indx(n + 1,0),counter(n + 1,0);
    // Counting numbers of shifts required.
    for(int i=0;i<n;i++) cin>>a[i],indx[a[i]] = i;
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        // Basically how many right shifts are required
        int curr = indx[b[i]] - i;
        if(curr < 0)
            curr+=n;
        // Counting colling shifts
        counter[curr]++;
    }
    int ans = 0;
    for(int i=0;i<=n;i++){
        ans = max(ans,counter[i]);
    }
    cout<<ans<<endl;
    return 0;
}