#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
void solve(){
    vector<string> s(9,"");
    for(int i=0;i<9;i++)
        cin>>s[i];
    char start = '1';
    int i = 0,j = 0,star = 0;
    while(i < 9){
        for(j=star;j<9;j+=3,i++){
            if(s[j][i] == start)
                s[j][i] = start + 1;
            else
                s[j][i] = start;
        }
        star++;
    }
    for(int i=0;i<9;i++)
        cout<<s[i]<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}