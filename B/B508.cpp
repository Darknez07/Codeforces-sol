#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int indx = -1,mx = -1;
    cin>>s;
    for(int i=0; i<s.length() - 1; i++){
        if((s[i] - '0') % 2 == 0){
            if((s[i] - '0') < (s[s.length() - 1] - '0')){
                swap(s[i],s[s.length() - 1]);
                cout<<s<<endl;
                return 0;
            }
            indx = i;
        }
    }
    if(indx == -1){
        cout<<-1<<endl;
        return 0;
    }
    swap(s[indx],s[s.length() - 1]);
    cout<<s<<endl;
}