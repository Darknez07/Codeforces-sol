#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n,ans=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){ans+=(s[i] == '0'?  -1: 1);}
    cout<<abs(ans);
    return 0;
}