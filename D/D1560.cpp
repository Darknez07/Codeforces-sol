#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
#define ll long long

int comp(string from, string to){
    int l1 = 0,l2 = 0,taken = 0;
    int n1 = from.length(),n2 = to.length();
    while(l1 < n1 && l2 < n2){
        if(from[l1] == to[l2])
            l1++,l2++,taken++;
        else
            l1++;
    }
    // Basically string difference
    // i.e. from -> to
    // n1 + n2 denotes removing all from  "from"
    // Adding all to "to"
    // Meanwhile taken is which is already present there
    // Finding the longest prefix of "to" in "from"
    return n1 + n2 - 2*taken;
}

void solve(){
    string s;
    cin>>s;
    int mx = s.length() + 1;
    for(int i=0;i<=60;i++){
        // From to was wrong
        mx = min(mx,comp(s,to_string((ll)pow(2,i))));
    }
    cout<<mx<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();   
    return 0;
}