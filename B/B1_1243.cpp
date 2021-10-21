#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int t,n,cnt;
    string s1,s2;
    char ch,gh;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s1>>s2;
        cnt = 0;
        int a[2];
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]){
                cnt++;
            }
        }
        if(cnt != 2){
            cout<<"No"<<endl;
            continue;
        }
        cnt = 0;
        for(int i=0;i<n;i++){
            if(s1[i] != s2[i]){
                a[cnt] = i;
                cnt++;
            }
        }
        ch = s1[a[0]];
        gh = s2[a[1]];
        s1[a[0]] = s2[a[1]];
        s2[a[1]] = ch;
        if(s1 == s2)
            cout<<"Yes";
        else{
            s1[a[0]] = ch;
            s2[a[1]] = gh;
            ch = s1[a[1]];
            gh = s2[a[0]];
            s1[a[1]] = s2[a[0]];
            s2[a[0]] = ch;
            if(s1 == s2){
                cout<<"Yes";
            }else{
                cout<<"No";
            }
        }
        cout<<endl;
    }
    return 0;
}