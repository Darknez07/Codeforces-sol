#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t,n;
    string s,ne,s2;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int k = 1;
        while(k < n && (s[k] < s[k - 1] || (k > 1 && s[k - 1] == s[k])))
            ++k;
        for(int i=0;i<k;i++)
            cout<<s[i];
        for(int i=k-1;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}