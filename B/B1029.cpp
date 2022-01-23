#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    int n,count,ans;
    cin>>n;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++)
        cin>>v[i];
    ans = -1;
    for(int i=0;i<n;i++){
        int j = i;
        while(j + 1 < n && v[j + 1] <= v[j]*2)
            j++;
        ans = max(ans, j - i + 1);
        i = j;
    }
    cout<<ans<<endl;
    return 0;
}