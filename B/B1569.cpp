#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        vector<vector<char> > v(n, vector<char>(n,'.'));
        cin>>s;
        vector<int> draws;
        for(int i=0;i<n;i++){
            v[i][i] = 'X';
            if(s[i] == '1'){
                draws.push_back(i);
            }
        }
        for(int i=0;i<draws.size();i++){
            for(int j=0;j<draws.size();j++){
                if(draws[j] == draws[i]){
                    v[draws[i]][draws[j]] = 'X';
                }else{
                    v[draws[i]][draws[j]] = '=';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<draws.size();j++){
                if(v[i][draws[j]] == '.')
                    v[i][draws[j]] = '-';
                if(v[draws[j]][i] == '.')
                    v[draws[j]][i] = '+';
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j] == '.' && v[j][i] == '.'){
                    v[i][j] = '+';
                    v[j][i] = '-';
                    break;
                }
            }
        }
        bool ok = true;
        for(int i=0;i<n;i++){
            if(s[i] == '2'){
                ok = false;
                for(int j=0;j<n;j++){
                    if(v[i][j] == '+'){
                        ok = true;
                        break;
                    }
                }
                if(!ok){
                    break;
                }
            }
        }
        if(!ok){
            cout<<"NO"<<endl;;
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i] == '2'){
                for(int j=0;j<n;j++){
                    if(v[i][j] == '.')
                        v[i][j] = '=';
                }
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}