#include <iostream>
#include <string>
#define vlong unsigned long long
using namespace std;
int main(){
    int t,mx,mn;
    cin>>t;
    vlong a,K;
    string s;
    while(t--){
        cin>>a>>K;
        while(--K){
            s = to_string(a);
            mx = -1;
            mn = 10;
            for(int i=0;i<s.length();i++){
                mx = max(mx, s[i] - '0');
                mn = min(mn, s[i] - '0');
            }
            if(mn == 0 || mx == 0)
                break;
            a+=(mn*mx);
        }
        cout<<a<<endl;
    }
    return 0;
}