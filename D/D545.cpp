#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    long long wait = 0,ans = 0;
    for(int i=0;i<n;i++){
        if(v[i] >= wait){
            ans++;
            wait+=v[i];
        }else{
            int j = i + 1;
            while(j < n && v[j] < wait) j++;
            if(j == n) break;
            ans++;
            i = j;
            wait+=v[j];
        }
    }
    cout<<ans<<endl;
    return 0;
}