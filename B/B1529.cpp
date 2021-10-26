#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int t,n,ans;
    long val,max_pos;
    bool no;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long> neg;
        max_pos = LONG_MAX;
        for(int i=0; i<n; i++){
            cin>>val;
            if(val <= 0)
                neg.push_back(val);
            else
                max_pos = min(val, max_pos);
        }
        sort(neg.begin(),neg.end());
        ans = neg.size();
        no = false;
        if(max_pos == LONG_MAX){
            cout<<ans<<endl;
            continue;
        }
        for(int i=1;i<neg.size();i++){
            if(abs(neg[i] -  neg[i - 1]) < max_pos){
                no = true;
                break;
            }
        }
        cout<<(no ? ans : ans + 1)<<endl;
    }
    return 0;
}