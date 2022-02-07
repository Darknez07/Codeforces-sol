#include <iostream>
#include <string>
#include <map>
#include <algorithm>
// We can convert 4 -> 322
using namespace std;
#define ll long long
int main(){
    int t;
    string s;
    cin>>t>>s;
    map<int,string> m;
    for(int i=2;i<=9;i++){
        if(i == 2 || i == 3 || i == 5 || i == 7)
            m[i] = to_string(i);
        else if(i == 4)
            m[i] = to_string(322);
        else if(i == 6)
            m[i] = to_string(53);
        else if(i == 8)
            m[i] = to_string(7222);
        else
            m[i] = to_string(7332);
    }
    string ans = "";
    for(int i=0;i<s.length();i++){
        ans+=m[s[i] - '0'];
    }
    sort(ans.rbegin(),ans.rend());
    cout<<ans<<endl;
    return 0;
}