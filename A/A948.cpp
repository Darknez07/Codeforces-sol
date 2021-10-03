#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char> > v;
    for(int i=0;i<m;i++){
        vector<char> vn(n);
        for(int j=0;j<n;j++){
            cin>>vn[j];
        }
        v.push_back(vn);
    }
    bool no = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == 'W'){
                if(i < m - 1){
                    if(v[i + 1][j] == 'S'){
                        no = true;
                        break;
                    }
                }
                if(i > 0){
                    if(v[i - 1][j] == 'S'){
                        no = true;
                        break;
                    }
                }
                if(j < n - 1){
                    if(v[i][j + 1] == 'S'){
                        no = true;
                        break;
                    }

                }
                if(j > 0){
                    if(v[i][j - 1] == 'S'){
                        no = true;
                        break;
                    }
                }
            }
        }
        if(no){
            break;
        }
    }
    if(no){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == '.'){
                v[i][j] = 'D';
            }
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}