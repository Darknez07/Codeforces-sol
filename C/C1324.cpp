#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,prev,dist;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        dist = -1;
        prev = -1;
        for(int i = s.length() - 1; i>=0;i--){
            if(s[i] == 'R'){
                prev = i;
                break;
            }
        }
        dist = s.length() - prev;
        for(int i=prev - 1;i>=0;i--){
            if(s[i] == 'R'){
                dist = max(dist, prev - i);
                prev = i;
            }
        }
        dist = max(dist, prev + 1);
        cout<<dist<<endl;
    }
}