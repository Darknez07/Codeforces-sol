#include <iostream>
#include <string>
using namespace std;
string p;
int changes(string s){
    int times = 0;
    for(int i=0;i<p.length();i++){
        if(s[i]!=p[i]) times++;
    }
    return times;
}
void solve(){
    int n;
    cin>>n;
    if(n % 7 == 0){
        cout<<n<<endl;
        return;
    }
    p = to_string(n);
    string s;
    int chng = p.length(),ones = 1000,twos = 1000,threes = 1000,tm;
    for(int i =14;i<=999;i+=7){
        s = to_string(i);
        if(s.length() > p.length())
            break;
        if(s.length() == p.length()){
            tm = changes(s);
            if(tm == 2) twos = min(twos,i);
            if(tm == 1) ones = min(ones,i);
            if(tm == 3) threes = min(threes,i);
        }
    }
    if(ones != 1000){
        cout<<ones<<endl;
    }else if(twos != 1000){
        cout<<twos<<endl;
    }else if(threes != 1000){
        cout<<threes<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}