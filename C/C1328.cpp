#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<char> v(n, '0'),v1(n, '0'),v2(n, '0');
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i = 0;
        for(;i<n;i++){
            if(v[i] == '0') continue;
            if(v[i] == '1'){v1[i] = '1';v2[i] = '0';i++;break;}
            v1[i] = '1';
            v2[i] = '1';
        }
        for(;i<n;i++){
            if(v[i] == '0') continue;
            else v2[i] = v[i];
        }
        for(i=0;i<n;i++){
            cout<<v1[i];
        }
        cout<<endl;
        for(i=0;i<n;i++){
            cout<<v2[i];
        }
        cout<<endl;
    }
    return 0;
}