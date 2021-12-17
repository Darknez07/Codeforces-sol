#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long t,n,j,mx,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> v(n, 0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ans = 0;
        for(int i=0;i<n;i++){
            j = i;
            mx = v[i];
            while(j < n && (v[j]*v[i]) > 0)
                mx = max(mx,v[j]),j++;
            // Location of last same sign thingy
            i = j - 1;
            // Add max to answers
            ans+=mx;
        }
        // Display answer
        cout<<ans<<endl;
    }
    return 0;
}