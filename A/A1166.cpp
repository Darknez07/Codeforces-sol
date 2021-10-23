#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    vector<int> counter(26);
    for(int i=0;i<n;i++){
        cin>>v[i];
        counter[v[i][0] - 'a']++;
    }
    int ans = 0,val;
    for(int i=0;i<26;i++){
        if(counter[i] == 0)
            continue;
        val = counter[i]/2;
        // Right side of classroom
        ans+=(val*(val - 1)/2);
        val = counter[i] - val;
        // Left side of classroom
        ans+=(val*(val - 1)/2);
    }
    cout<<ans<<" ";
    return 0;
}