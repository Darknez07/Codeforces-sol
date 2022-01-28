#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n,val,ans = -1;
    string to,from,beech;
    map<string,int> m;
    m["polycarp"] = 1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>to>>beech>>from;
        transform(to.begin(),to.end(),to.begin(), ::tolower);
        transform(from.begin(),from.end(),from.begin(), ::tolower);
        // Count out edges
        val = m[from] + 1;
        ans = max(ans, val);
        // Assign now out edges
        m[to] = val;
    }
    cout<<ans<<endl;
}