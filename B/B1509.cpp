#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        map<char,int> m;
        m['M'] = 0;
        m['T'] = 0;
        if(s[0] == 'M' || n % 3){
            cout<<"NO\n";
            continue;
        }
        int i;
        for(i=0;i<n;i++){
            m[s[i]]++;
            if(s[i] == 'M' && m['T'] < m['M']){
                i =0;
                break;
            }
        }
        if(!i || m['T'] != 2*m['M']){
            cout<<"NO\n";
            continue;
        }
        m['T'] = 0;
        m['M'] = 0;
        for(i=n-1;i>=0;i--){
            m[s[i]]++;
            if(s[i] == 'M' && m['T'] < m['M']){
                i = n;
                break;
            }
        }
        if(i == n){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}