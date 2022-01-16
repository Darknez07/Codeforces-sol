#include <iostream>
#include <string>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
int main(){
    int t,ans,sum;
    bool done = false;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        ans = 0;
        sum = s[s.length()-1] -'0' + s[s.length()- 2] - '0';
        if(sum >= 10){
            s[s.length() - 1] = (sum%10) + '0';
            s[s.length() - 2] = (sum/10) + '0';
            cout<<s<<endl;
            continue;
        }
        done = false;
        for(int i=s.length() - 1; i>=1;i--){
            if(s[i] == '0' && s[i - 1] == '0')
                continue;
            sum = s[i] - '0' + s[i - 1] - '0';
            if(sum >= 10){
                s[i - 1] = (sum/10) + '0';
                s[i] = (sum%10) + '0';
                done = true;
                break;
            }
        }
        if(done){
            cout<<s<<endl;
            continue;
        }
        sum = s[0] - '0' + s[1] - '0';
        s[1] = sum + '0';
        cout<<s.substr(1,s.length())<<endl;
    }
    return 0;
}