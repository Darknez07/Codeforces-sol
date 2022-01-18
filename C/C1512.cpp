#include <iostream>
#include <string>
using namespace std;
#define minus {cout<<-1<<endl;return;}
int t,zeros,ones,n,mx;
string s;
void solve(){
    cin>>zeros>>ones>>s;
    n = (zeros + ones);
    int counter[2] = {zeros,ones};
    if(n == 1){
        if(s[0] == '?')
            cout<<(counter[0] > counter[1] ? 0: 1)<<endl;
        else
            cout<<(counter[s[0] - '0'] ? (s[0] - '0'): -1)<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]== '?')
            continue;
        counter[s[i] - '0']--;
    }
    if(counter[0] < 0 || counter[1] < 0)
        minus
    for(int i=0;i<(n/2);i++){
        if(s[i] == '?' && s[n - i - 1] != '?'){
            if(counter[s[n - i - 1] - '0'] <= 0)
                minus
            counter[s[n - i - 1] - '0']--;
            s[i] = s[n - i - 1];
        }else if(s[n - i - 1] == '?' && s[i] != '?'){
            if(counter[s[i] - '0'] <= 0)
                minus
            s[n - i - 1] = s[i];
            counter[s[i] - '0']--;
        }else if(s[i] != s[n - i - 1])
            minus
    }
    for(int i=0; i<(n/2); i++){
        if(s[i] == '?'){
            if(counter[0] < 2 && counter[1] < 2)
                minus
            if(counter[0] >= 2){
                counter[0]-=2;
                s[i] = '0';
                s[n - i - 1] = '0';
            }else if(counter[1] >=2){
                counter[1]-=2;
                s[i] = '1';
                s[n - i - 1] = '1';
            }
        }
    }
    if(n % 2 == 1 && s[n/2] == '?'){
        mx = (counter[0] > counter[1] ? 0: 1);
        if(counter[mx] == 0)
            minus
        counter[mx]--;
        s[n/2] = '0' + mx;
    }
    cout<<s<<endl;
}
int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}