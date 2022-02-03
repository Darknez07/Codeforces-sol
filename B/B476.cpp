#include <iostream>
#include <string>
using namespace std;
int full,valing;
double all = 0,up = 0;
void search(string s,int len, int vals){
    if(len == full){if(valing == vals){up++;}all++;return;}
    if(s[len] == '+'){vals++;search(s,len + 1,vals);}
    else if(s[len] == '-'){vals--;search(s,len + 1,vals);}
    else{
        search(s,len + 1, vals - 1);
        search(s,len + 1, vals + 1);
    }
}
int main(){
    string s1,s2;
    cout.precision(20);
    cin>>s1>>s2;
    int val = 0;
    for(int i=0;i<s1.length();i++){
        if(s1[i] == '+') val++;
        else val--;
    }
    valing = val;
    full = s1.length();
    search(s2,0,0);
    cout<<(up/all)<<endl;
    return 0;
}