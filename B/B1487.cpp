#include <iostream>
#include <unordered_set>
#include <map>
using namespace std;
#define ll long long
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        // Making k 0 indexed
        k--;
        cout<<((k + (n%2)*(k/(n/2)))%n) + 1<<endl;
        /*Explaination
            n/2 finds the number of gaps i.e. the skip of the
            cat B when Cat A has occupied the position
        */
    }
    return 0;
}