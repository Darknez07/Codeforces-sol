#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,count;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        count  = 0;
        // We pop whenever B appears
        // And push whenever A appears
        for(int i=0;i<s.length();i++){
            if(count && s[i] == 'B') count--;
            else count++;
        }
        cout<<count<<endl;
    }
}