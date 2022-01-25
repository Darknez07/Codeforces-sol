#include <iostream>
#include <string>
#include <algorithm>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define minus {cout<<-1<<endl;return;}
string a,c,b;
void solve(){
    cin>>a>>c;
    int j = a.length() - 1;
    int f;
    b = "";
    for(int i=c.length() - 1;i>=0;i--){
        if(j < -1) minus
        if(j == -1 && i >= 0){
            b+=c[i];
            continue;
        }
        if(c[i] < a[j]){
            if(!i) minus
            f = (c[i] - '0') + (c[i - 1] - '0')*10 - (a[j] - '0');
            i--;
            b+=(f + '0');
        }else{
            f = c[i] - a[j];
            b+=(f + '0');
        }
        j--;
        if(f < 0 || f > 9) minus
    }
    if(j == -1){
        reverse(b.begin(), b.end());
        cout<<stoll(b)<<endl;
    }else
        minus
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}