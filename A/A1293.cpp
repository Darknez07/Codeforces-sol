#include <iostream>
#include <set>
#include <cmath>
// Copied from somewhere
using namespace std;
int main(){
    int t,n,s,k,val;
    cin>>t;
    while(t--){
        cin>>n>>s>>k;
        set<int> occup;
        for(int i=0;i<k;i++){
            cin>>val;
            occup.insert(val);
        }
        for (int i=0; i<=k; i++) {
		    if (s-i >= 1 && occup.find(s - i) == occup.end()) {cout << i << endl; break;}
		    if (s+i <= n && occup.find(s+i) == occup.end()){cout << i << endl; break;}
	    }
    }
    return 0;
}