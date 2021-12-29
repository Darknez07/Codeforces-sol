#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n,m;
    string s;
    cin>>n>>m;
    vector<string> v(n,"");
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    char on,off;
    for(int i=0;i<n;i++){
        if(i % 2 == 0){on = 'B';off='W';}
        else{on='W';off='B';}
        for(int j=0;j<m;j++){
            if(v[i][j] == '.')
                cout<<(j % 2 == 0 ? on: off);
            else
                cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}