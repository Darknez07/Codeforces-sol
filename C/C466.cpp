#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    ll sum = 0;
    vector<ll> v(n, 0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum % 3){cout<<0<<endl;return 0;}
    sum/=3;
    ll t= 0,ct = 0,res = 0;
    for(int i=0;i<n-1;i++){
        t+=v[i];
        // Then use those prefixes
        // in final result
        // Thus early ct has sum/3 now we get
        // 2*sum/3 thus making the left side
        // Either two part cut with (s/3 or 2s/3)
        // So last cut will be s/3 by default
        // Thus s/3 in prefix, next 2*s/3 till middle
        // And we know by sum that last left is s/3
        // So till 2*s/3 how many s/3 prefixes possible
        // Thus making the final result res+=ct;
        // We add them
        // now if -,+ combi exits there may be more s/3's in prefix;
        // So counts them and finally when it hits 2*s/3 adds to result;
        if(t == 2*sum) res+=ct;
        // We find the prefixes
        // Where sum/3 is found
        if(t == sum) ct++;
    }
    cout<<res<<endl;
    return 0;
}