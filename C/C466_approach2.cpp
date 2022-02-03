// Here count indexes and find the places;
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<ll> v(n, 0);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum % 3){cout<<0<<endl;return 0;}
    vector<int> indx1,indx2;
    sum/=3;
    ll su = 0;
    for(int i=0;i<n;i++){
        su+=v[i];
        // Find all the indexes where sum/3
        if(su == sum && i >=0 && i < n - 2)
            indx1.push_back(i);
        // Indexes where 2*sum/3'
        if(su == 2*sum && i >= 1 && i < n - 1)
            indx2.push_back(i);
    }
    if(!(indx1.size() && indx2.size())){cout<<0<<endl;return 0;}
    int j = 0;
    ll ans = 0;
    // Find the place till where the first s/3 was seen
    for(;j<indx2.size();j++)
        if(indx2[j] > indx1[0])
            break;
    // Finding the last 2*sum/3 suffixes;
    // all suffixes where 2*sum/3 occured first;
    ans+=(indx2.size() - j);
    // Count all the places where 2*sum/3 occured
    // irrespective of s/3;
    for(int i=1;i<indx1.size();i++){
        // Find all the indexes where the found index
        // i.e. first 2*sum/3 are less than sum/3;
        // The place which the first 2*sum/3 occured is less than
        // The places where sum/3 occured in array
        // Thus increment the j so where we find the last index
        // where 2*sum/3 occured before sum/3
        //  This index found is basically a place where
        // We used prefix "indx1[i]" to generate s/3
        // And the place which fits the location of next 2*s/3
        // For the given "indx1[i]"
        while(indx2[j] <= indx1[i]) j++;
        // Following finds all the places where the sum/3 exits;
        ans+=(indx2.size() - j);
        // Counts till where the given s/3 is valid such that
        // s/3,2*s/3,s cumsum occurs.
    }
    cout<<ans<<endl;
    return 0;
}