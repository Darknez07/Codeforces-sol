#include <iostream>
#include <string>
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    if(s == 0 && m == 1){cout<<"0 0"<<endl;return 0;}
    if(s > 9*m || s < 1){cout<<-1<<" "<<-1<<endl;return 0;}
    if(m == 1){cout<<s<<" "<<s<<endl;return 0;}
    string s1 = "",s2 = "";
    int temp = s;
    for(int i=0;i<m;i++){
        if(temp > 9){
            s1+='9';
            temp-=9;
        }else{
            s1+=(temp + '0');
            temp = 0;
        }
    }
    temp = s;
    s2  = s1;
    for(int i=m - 1;i>=1;i--){
        if(temp > 9){
            s2[i] = '9';
            temp-=9;
        }else{
            s2[i] = ((temp - 1) + '0');
            temp = 1;
        }
    }
    s2[0] = temp + '0';
    cout<<s2<<" "<<s1<<endl;
    return 0;
}