#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n,count,count2;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        count = 0,count2 = 0;
        for(int i=0;i<n-1;i++){
            if(s[i] == '1' && s[i + 1] == '0'){
                i++;
                count++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i] == '0' && s[i + 1] == '1'){
                i++;
                count2++;
            }
        }
        cout<<(n/2 - max(count,count2))<<endl;
    }
    return 0;
}