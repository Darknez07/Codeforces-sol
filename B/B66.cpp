#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i = 0;i < n; i++){
        cin>>v[i];
    }
    int ans = -1, count;
    for(int i=0;i<n;i++){
        int j;
        count = 0;
        // Look right
        for(j=i + 1;j<n;j++){
            if(v[j - 1] < v[j])
                break;
        }
        count+=abs(j - i);
        // Look left
        for(j=i;j>=1;j--){
            if(v[j] < v[j - 1])
                break;
        }
        count+=abs(j - i);
        ans = max(ans, count);
    }
    cout<<ans<<endl;
    return 0;
}