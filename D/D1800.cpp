#include <iostream>
#include <string>
#include <map>
using namespace std;

// Solved with tutorial
void solve(){
    int n,count;
    string s;
    cin>>n>>s;
    count = n - 1;
    // So until we find same we assume all unique
    for(int i=1;i<n-1;i++)
    // To test for string before and after a var
    // Will be same since we are removing 2
    // the 0th and 2nd are same we are essentially getting same
    // string example -> abbababa
    // so 2nd and 4th are same remove (2nd and 3rd) and (3rd and 4th)
    // Left with "abbaba" and "abbaba" -> i.e. same string.
        if(s[i - 1] == s[i + 1])
            count--;
    cout<<count<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}