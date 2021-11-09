#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    vector<long> v(3,0);
    cin>>t;
    while(t--){
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        // Because we eat all the candies eventually
        // or Only leave the one's where 2 zeros are reached
        if(v[2] <= (v[1] + v[0]))
            cout<<(v[0] + v[1] + v[2])/2<<endl;
        else
        // We can only the least amount one's
        // Which leaves the big guy
            cout<<(v[1] + v[0]) <<endl;
    }
    return 0;
}