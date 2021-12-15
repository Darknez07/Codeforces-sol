#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long> v(n, 1);
    int indx = 2,ans = -1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=2;i<n;i++){
        if(v[i]==(v[i - 1] + v[i - 2])){
            indx++;
        }else{
            ans = max(ans, indx);
            indx = 2;
        }
    }
    if(n == 1)
        ans = 1;
    else
        ans = max(indx, ans);
    cout<<ans;
    return 0;
}