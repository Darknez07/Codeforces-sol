#include <iostream>
#include <vector>
// Noice solution
using namespace std;
int main(){
    int t,n;
    cin>>t;
    // val input
    // sum is sum
    // x is divi
    long long x,val,sum;
    while(t--){
        cin>>n>>x;
        vector<pair<long long,long> > v;
        sum = 0;
        for(int i=0;i<n;i++){
            cin>>val;
            // intially count is 1
            v.push_back(make_pair(val,1));
        }
        int i = 0;
        // Until any one of the i's divide
        // DO a while loop
        while(v[i].first % x == 0){
            v.push_back(make_pair(v[i].first/x, x*v[i].second));
            i++;
        }
        // Add all the cnt*val
        // to get final answer
        for(int i=0;i<v.size();i++){
            sum+=(v[i].first*v[i].second);
        }
        cout<<sum<<endl;
    }
    return  0;
}